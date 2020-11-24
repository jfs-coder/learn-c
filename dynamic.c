#include <stdio.h>
#include <stdlib.h>

int main() {
	typedef struct {
		char *name;
		int age;
	} person;

	person *myPerson = (person *) malloc(sizeof(person));

	myPerson->name = "Peter";
	myPerson->age  = 59;

	printf("Name: %s\n", myPerson->name);
	printf("Age : %d\n", myPerson->age);

	free(myPerson);

	return 0;
}
