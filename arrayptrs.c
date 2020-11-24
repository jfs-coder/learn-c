#include <stdio.h>

int main() {
	char c = 'A';
	char *pc = &c;
	
	char vowels[] = {'A', 'E', 'I', 'O', 'U'};
	char *pvowels = &vowels[0];

	printf("BEFORE DOING ANYTHING, LET'S LOOK AT VALUES OF pvowels AND &vowels[0]\n");
	// note: here we use %u to show UNSIGNED address or else it will be different if you use %d...go ahead and change to %d if you want to see for yourself.
	printf("pvowels: %u\n", pvowels);
	printf("&vowels[0]: %u\n", &vowels[0]);
	printf("-----------------------------\n");
	printf("AND NOW THE VALUES OF *pvowels AND vowels[0]\n");
	printf("*pvowels: %d\n", *pvowels);
	printf("vowels[0]: %d\n", vowels[0]);
	printf("-----------------------------\n");
	printf("AND NOW WE VUE THE CHARACTERS AT THOSE LOCATIONS\n");
	printf("*pvowels: %c\n", *pvowels);
	printf("vowels[0]: %c\n", vowels[0]);
	printf("-----------------------------\n");

	int i;

	// Print the addresses
	for (i = 0; i < 5; i++) {
		printf("&vowels[%d]: %u, pvowels + %d: %u, vowels +%d: %u\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
	}

	// Print the values
	for (i = 0; i < 5; i++) {
		printf("vowels[%d]: %c, *(pvowels+ %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
	}

	return 0;
}
	
	
