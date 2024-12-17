# Level14

When we check what we have access to we don't find anything useful, even when using `find /` like we did before.  
The only thing left to break is `getflag` but this we're not even going to be decompiling the binary !  

First, let's use strings on `getflag`
>`strings /bin/getflag`

We can see a lot of text here but the one which interests us is this one `boe]!ai0FB@.:|L6l@A?>qJ}I`, where have we seen it before ?  
In the level13 decompiled binary, when it was called as a parameter to the nebulous function `ft_des`.  
Let's look into that.

Let's use GDB to disassemble the main.
>`gdb /bin/getflag`
>`start`
>`disass main`

Here we can deduct that `getflag` is basically just a huge Else If that takes our current UID and returns the matching token. We could impersonate any UID and trick the binary into giving us a specific token, or we could reverse engineer the `ft_des` function to it to decypher the tokens we saw using `strings`. Let's do that.

So, outside our VM we'll copy the `ft_des` function in a .c file, add the necessary headers and typedef, and a basic main.
This should give us :

```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef unsigned int uint;
typedef unsigned char byte;

char * ft_des(...)
{
...
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return 1;
  printf("the decyphered flag is %s\n", ft_des(argv[1));
  return 0;
}
```

Finally we can compile this code and decypher the tokens inside getflag !

>`./a.out 'g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|'`  
gives us `7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ`
