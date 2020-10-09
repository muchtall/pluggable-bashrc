# pluggable-bashrc
A collection of bashrc tweaks wrapped up as includes. Pick and choose what you like!

# Setup

First, back up your current .bashrc file. You may want to move/copy it into the includes in a moment.

The initial requirements are to use these files:
 * .bashrc (basic bashrc that just sets up the includes)
 * .bashrc_includes\000-stock-ubuntu-20.04-bashrc.inc (or a copy of your original bashrc)
 * .bashrc_includes\015-interactive.inc (sets up a .bashrc_includes\interactive\ include directory just for those things that should only be used when in a TTY).

Now pick a few .inc files from the repo and place them in the appropriate directory.

**Without logging out of your current session**, Log in with a new terminal to verify that the plugin works.

Once verified, you can optionally close your original terminal session.
