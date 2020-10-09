# Turn on colors, as well as line-buffering (so that tailing a log and piping to grep doesn't cause massive lag due to buffering).
GREP_OPTS='--color=auto --line-buffered'

# Alias some common grep variants
alias egrep="egrep ${GREP_OPTS}"
alias fgrep="fgrep ${GREP_OPTS}"
alias grep="grep ${GREP_OPTS}"
