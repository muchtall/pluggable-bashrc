# Get the OS release variables
if [ -f /etc/os-release ]; then
	. /etc/os-release
fi
if   [[ "$NAME" == "" ]] ; then
	NAME=`cat /etc/system-release | cut -d" " -f1`
	VERSION_ID=`cat /etc/system-release | sed -re 's/.*? ([0-9\.]+).*/\1/g'`
fi
