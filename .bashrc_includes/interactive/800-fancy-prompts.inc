# Summarize distribution info for prompt (handy if using multiple Linux ditros on WSL)
if   [[ -e /etc/redhat-release ]] ; then
        NAME="Redhat"
        VERSION_ID="`cat /etc/redhat-release | sed -re 's/.* release ([^\.]+).*/\1/g'`"
fi
if   [[ "$NAME" == "" ]] ; then
        NAME=`cat /etc/system-release | cut -d" " -f1`
        VERSION_ID=`cat /etc/system-release | sed -re 's/.*? ([0-9\.]+).*/\1/g'`
fi
if   [[ "$NAME" == "Ubuntu" ]]       ; then PROMPT_DIST="U" ;
elif [[ "$NAME" == "CentOS Linux" ]] ; then PROMPT_DIST="C" ;
elif [[ "$NAME" == "CentOS" ]] ; then PROMPT_DIST="C" ;
elif [[ "$NAME" == "Redhat" ]] ; then PROMPT_DIST="R" ;
else PROMPT_DIST="?"
fi
VERSION_ID_MAJOR="`echo $VERSION_ID | cut -d\. -f1`"
DIST_AND_VER="${PROMPT_DIST}${VERSION_ID_MAJOR}"

# set a fancy prompt
if [[ "`hostname`" =~ ^(nc-desktop)$ ]] ; then
        PS1='\[\033[01;31m\]\u@\h:\w\$\[\033[0m\] '
else
        #PS1='\u@\h:\w\$ '
        PS1='\u@\h:'$DIST_AND_VER':\w\$ '
fi

# If this is an xterm set the title to user@host:dir
case $TERM in
xterm*)
        #PROMPT_COMMAND='echo -ne "\033]0;${USER}@${HOSTNAME}: ${PWD}\007"'
        PROMPT_COMMAND='echo -ne "\033]0;${USER}@${HOSTNAME}:'$DIST_AND_VER': ${PWD}\007"'
        ;;
*)
        ;;
esac
