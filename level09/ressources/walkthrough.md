# Level09

The `token` was cyphered by `level09`. To understand the cypher we'll test the program with a simple input.
>`./level9 aaaa` -> `abcd`

The program iterates over each character in the string and adds its position in the string to it.
Let's create our own program to reverse this.
```c
#include <stddef.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		printf("Provide an argument\n");
		return -1;
	}

	for (size_t i = 0; argv[1][i]; ++i) {
		argv[1][i] -= i;
	}

	printf("%s\n", argv[1]);

	return 0;
}
```

Compile and execute to get the password.
>`gcc -std=c99 /tmp/reverse.c -o /tmp/reverse`

>`/tmp/reverse $(cat token)`

Get the flag
>`su flag09`

>`getflag`
