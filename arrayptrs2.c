#include <stdio.h>

int main() {

	int what[] = {1, 2, 3, 4};
	int *ptr   = &what[0];

	printf("*ptr: %d\n", *ptr);
	printf("what[0]: %d\n", what[0]);
	printf("ptr: %u\n", ptr);
	printf("&what[0]: %u\n", &what[0]);

	printf("*ptr + 1: %d\n", *ptr + 1);
	printf("what + 1: %u\n", what + 1);
	printf("*(what + 1): %d\n", *(what + 1));


	return 0;
}
