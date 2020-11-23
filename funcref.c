#include <stdio.h>

int main() {

	void addOne(int n) {
		n++;
	}

	void addOneRef(int *z) {
		(*z)++;
	}

	int n = 0;
	int z = 0; 

	printf("Before: %d\n", n);
	addOne(n);
	printf("After: %d\n", n);

	printf("Before: %d\n", z);
	addOneRef(&z);
	printf("After: %d\n", z);

	return 0;
}
