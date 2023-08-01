![21b4fc5c1b5df84e6ae4fe8807aa359d929e748a](https://github.com/christabely/alx-low_level_programming/assets/129256391/fe7094f6-3c39-46a0-a159-8f1992f569f0)

[![Typing SVG](https://readme-typing-svg.demolab.com/?lines=⭐️⭐️+Magic+Happens+with+C+⭐️⭐️;)](https://git.io/typing-svg)

CONCEPTS TO LOOK AT;

- [e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf](https://github.com/christabely/alx-low_level_programming/files/12229197/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf)
- https://en.wikipedia.org/wiki/Dennis_Ritchie
- https://youtu.be/de2Hsvxaf8M
- https://youtu.be/smGalmxPVYc
- https://youtu.be/rk2fK2IIiiQ
- https://youtu.be/FwpP_MsZWnU
- https://youtu.be/VDslRumKvRA
- https://github.com/alx-tools/Betty/wiki
- https://twitter.com/unix_byte/status/1024147947393495040?s=19
- http://harmful.cat-v.org/software/c++/linus

BETTY LINTER
- To run the Betty linter just with command betty <filename>:

- Go to the Betty repository
Clone the repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:

#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

After copying the above,save, exit file and change permissions to apply to all users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!

EXECUTABLE & FILE PERMISSIONS
To make your files executable or grant permissions to users, use the chmod command.
chmod u+x file_name 
or chmod +x file_name

To reverse permission given to users,
chmod u-x file_name
or chmod -x file_name

COMPILATION
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
