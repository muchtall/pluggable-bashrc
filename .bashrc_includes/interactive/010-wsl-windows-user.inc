# Workaround for Windows lack of $USER
if [ "$USER" == "" ] ; then
	USER=`whoami`
fi
