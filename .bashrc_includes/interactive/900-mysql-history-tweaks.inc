# MySQL client history by hostname
if [ ! -d "${HOME}/.mysql_history_files" ]; then
	mkdir ${HOME}/.mysql_history_files
fi
export MYSQL_HISTFILE="${HOME}/.mysql_history_files/`hostname`"
