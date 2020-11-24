#include <stdio.h>

int main() {
	
	int num = 1000;
	int *ptr = &num;
	struct car {char *automaker; char *model;};

	struct car myCar;

	myCar.automaker = "Hyundai";
	myCar.model     = "Accent" ;

	printf("Make: %s\n", myCar.automaker);
	printf("Model: %s\n", myCar.model);

	printf("num: %d\n", num);
	printf("&num: %d\n", &num);
	printf("ptr: %d\n", ptr);
	printf("*ptr: %d\n", *ptr);
	printf("&ptr: %d\n", &ptr);
	printf("(*ptr): %d\n", (*ptr));

	return 0;
}
