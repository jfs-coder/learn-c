#include <stdio.h>

int main() {
	char *name = "John Simard";
	int i = 0;

	while(name[i] != '\0') {
		printf("%c\n", name[i]);
		i++;
	}

	// define local variable <a>
	int a = 1;
	// define a pointer variable, and point it to <a> using the & operator
	int *ptr_a = &a;

	// print them out
	printf("The value of a is: %d\n", a);
	printf("The value of *ptr_a is also: %d\n", *ptr_a);
	printf("The value of &a is: %d\n", &a);
	printf("The value of ptr_a is also: %d\n", ptr_a);

	return 0;
}
