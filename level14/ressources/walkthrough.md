# Level14

Download file to decompile it with ***Ghidra***.
>`scp -P 4242 level14@<VM address>:/bin/getflag .`

We need to override `ptrace` and `getuid` security. Let's use `gbd` to do so.
>`gdb -q getflag`

>`b main`

>`r`

>`disassemble main`

Set a breakpoint to the address just after the call to `ptrace`.
>`b *<address>`

>`c`

Set the return value to 1.
>`set $eax = 1`

Set a breakpoint to the address just after the call to `getuid`.
>`b *<address>`

>`c`

Set the return value to 3014 to get the flag.
>`set $eax = 3014`

`c`
