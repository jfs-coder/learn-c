#include <stdio.h>

int mult(int x, int y) {

	return x * y;
}

/* here we can create a function that does not return a value (void) */
void goodbye() {
	printf("You are the weakest link, goodbye!\n");
}

int main() {

	int result = 0;
	int num1 = 15;
	int num2 =  7;

	result = mult(num1, num2);

	printf("%d times %d is %d\n", num1, num2, result);

	goodbye();

	return 0;
}
