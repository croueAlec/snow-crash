# Level13

Use `gdb` to disassemble the main function of `level13`.
>`gdb -q ./level13`

>`disassemble main`

Let's put a breakpoint just before the call to `getuid`
>`b *<address>`

>`disassemble main`

We can see this in the `je     <address> <main+63>`. This instruction will jump to another part of the program if the uid is correct. Let's jump manually to thsi address to get the flag.
>`jump *<address>`
