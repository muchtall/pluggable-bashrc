# Workaround for WSL on Windows and it's lack of $USER
if [ "$USER" == "" ] ; then
	USER=`whoami`
fi
