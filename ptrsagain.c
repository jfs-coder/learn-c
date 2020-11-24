#include <stdio.h>

int main() {

	// let's play with pointers again
	int eh = 99;
	int *dude = &eh;

	printf("eh: %d\n", eh);
	printf("&eh: %d\n", &eh);
	printf("dude: %d\n", dude);
	printf("*dude: %d\n", *dude);
	printf("&dude:  %d\n",  &dude);
	printf("let's add 1 to the address stored at dude and then access it.\n");
	dude++;
	printf("dude after adding 1: %d\n", dude);
	printf("*dude after all this (should be random number): %d\n", *dude);
	
	return 0;
}
