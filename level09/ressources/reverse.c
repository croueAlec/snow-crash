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
