# Level13

This along with the next one are fun.  
Firstly, we'll copy the `level13` binary out of the VM.  
> `scp -P level3@<VM address>:level13 .`

Then, using the *Ghidra* decompiler, we'll have a look at the code inside to understand it.

Use `gdb` to disassemble the main function of `level13`.
>`gdb -q ./level13`

>`start`
>`disass main`

Let's compare the assembly code with the decompiled C code.  
We can see the first and second calls to `getuid`, the first call to `printf`, the call to `exit`, a call to a function named `ft_des` *(important for level14)*, and the final call to `printf`.  
What we'll try to do is change the `$pc` to directly print the flag and skip the **uid** check altogether.  

To do that we copy the address of the instruction before `ft_des`.  
>`0x<address> <+63>`
Then we set the program count to that instruction and continue.
>`set $pc = 0x<address>`
>`continue`
>Your token is 2A31L79asukciNyi8uppkEuSx

We can then close gdb and `su flag13` using our token.  
Let's keep the *Ghidra* page open, we'll need it for **level14**.
