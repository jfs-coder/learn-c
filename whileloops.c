#include <stdio.h>

int main() {
	int n = 0;
	/* while n is smaller than 10, keep looping */
	while ( n < 10) {
		printf("%d ", n);
		n++;
	}
	printf("\n");

	/* This would run forever, don't do it (unless you have use break)
	while (1) {

	}
	*/

	n = 0; /* reset our n variable */
	while (1) {
		n++;
		if (n == 10) {
			printf("Breaking out out of the while loop.\n");
			break;
		}
	}

	/* in the following code, the <continue> directive causes the <printf>
	command to be skipped, so that only even numbers are printed.
	*/

	n = 0; /* reset our n variable again */
	while (n < 10) {
		n++;

		/* check that n is odd */
		if (n % 2 == 1) {
			/* go back to the start of the while block */
			continue;
		}
		
		/* we reach this code only if <n> is even */
		printf("The number %d is even.\n", n);
	}

	return 0;
}

