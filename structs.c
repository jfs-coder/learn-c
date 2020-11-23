#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person {
	int age;
	char *name;
};

// alternatively you can declare it with typedef and not have to then 
// use struct every time you want to declare a variable...

typedef struct {
	int year;
	char *automaker;
} car;

// now you could just use "car c;" to declare it

int main() {
	// declare a new struct
	struct person em;
	car myCar = {2020, "Hyundai"};

	printf("Year: %d\n", myCar.year);
	printf("Brand: %s\n", myCar.automaker);

	// set some data
	em.age  = 32;
	em.name = malloc(6 * sizeof(char));
	strcpy(em.name, "Brian");

	// print it out
	printf("Age: %d\n", em.age);
	printf("Name: %s\n", em.name);

	// create a pointer to struct
	struct person *em_ptr = &em;

	//set some data, again
	(*em_ptr).age = 33;
	(*em_ptr).name = realloc((*em_ptr).name, 7 * sizeof(char));
	strcpy((*em_ptr).name, "Brian!");

	// print it out
	printf("Age: %d\n", (*em_ptr).age);
	printf("Name: %s\n", (*em_ptr).name);

	// set some data, again, but with better syntax
	em_ptr->age = 34;
	em_ptr->name = realloc(em_ptr->name, 8 * sizeof(char));
	strcpy(em_ptr->name, "Brian!!");

	// print it out
	printf("Age: %d\n", em_ptr->age);
	printf("Name: %s\n", em_ptr->name);
}

