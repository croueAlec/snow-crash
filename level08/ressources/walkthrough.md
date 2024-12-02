# Level08

We'll get `level08` on our local machine to decomplie it with ***Ghidra***.  
>`scp -P 4242 level08@<VM address>:level08 .`  

The `level08` program takes a file as parameter this file may not contain `token` in it's name.  
Let's create a symlink to `token` to overide this security.  
>`ln -s /home/user/level08/token /tmp/flag`  

Get the password and the flag.
>`./level8 /tmp/flag`

>`su flag08`

>`getflag`
