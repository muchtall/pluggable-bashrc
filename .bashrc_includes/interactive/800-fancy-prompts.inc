# Summarize distribution info for prompt (handy if using multiple Linux ditros on WSL)
# REQUIRES: .bashrc_includes\010-os-release.inc

if   [[ "$NAME" == "Ubuntu" ]]       ; then PROMPT_DIST="U" ;
elif [[ "$NAME" == "CentOS Linux" ]] ; then PROMPT_DIST="C" ;
elif [[ "$NAME" == "CentOS" ]] ; then PROMPT_DIST="C" ;
else PROMPT_DIST="?"
fi
VERSION_ID_MAJOR="`echo $VERSION_ID | cut -d\. -f1`"
DIST_AND_VER="${PROMPT_DIST}${VERSION_ID_MAJOR}"

# set a fancy prompt showing an abbreviated distro name and version
PS1='\u@\h:'$DIST_AND_VER':\w\$ '

# If this is an xterm set the title bar to user@host:dir
case $TERM in
xterm*)
	PROMPT_COMMAND='echo -ne "\033]0;${USER}@${HOSTNAME}:'$DIST_AND_VER': ${PWD}\007"'
	;;
*)
	;;
esac