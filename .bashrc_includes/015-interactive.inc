# If running interactively, then:
if [ "$PS1" ]; then
	for f in ~/.bashrc_includes/interactive/*.inc
		do source $f
	done
fi
