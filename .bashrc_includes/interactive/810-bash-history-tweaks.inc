### Bash History Tweaks
# Write history each time a command runs
PROMPT_COMMAND="history -a ; $PROMPT_COMMAND"

# Use a serial timestamp in bash history output (ie, Oct  9 17:58:32 2020 == 20201009175832)
export HISTTIMEFORMAT="%Y%m%d%H%M%S "

# Separate history file per host (useful when using NFS automounted home directories)
if [ ! -d "${HOME}/.bash_history_files" ]; then
	mkdir ${HOME}/.bash_history_files
fi

# Create a histfile if it doesn't exist yet, so we start capturing history in the file immediately
if [ ! -f "${HOME}/.bash_history_files" ]; then
	touch ${HOME}/.bash_history_files/`hostname`
fi
export HISTFILE="${HOME}/.bash_history_files/`hostname`"

# Crazy-go-nuts history size.
export HISTFILESIZE=
export HISTSIZE=
