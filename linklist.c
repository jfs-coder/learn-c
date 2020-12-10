#include <stdio.h>
#include <stdlib.h>

struct sPerson {
	int age;
	struct sPerson* nextInLine;
};

struct sPerson* getNewPerson(const int age) {
	struct sPerson* newPerson = NULL;
	newPerson = malloc(sizeof(struct sPerson));
	newPerson->nextInLine = NULL;
	newPerson->age = age;
	printf("Created new person at %p\n", newPerson);
	return newPerson;
}

void printPerson(const struct sPerson* person, const char* comment) {
	if (person == NULL) {
		printf("%s is NULL\n", comment);
	}
	else {
		printf("%s: age: %d address: %p nextInLine:%p\n",
		comment, 
		person->age, 
		person, 
		person->nextInLine);
	}
}

int main() {
	printf("\n\n[START]\n\n");

	struct sPerson* first = NULL;
	struct sPerson* second = NULL;

	printPerson(first, " first");
	printPerson(second,"second");

	first  = getNewPerson(11);
	second = getNewPerson(19);

	printPerson(first, " first");
	printPerson(second, "second");

	first->nextInLine = second;
	printPerson(first, "first");
	printPerson(first->nextInLine, "first->nextInLine");
	printPerson(second, "second");
	// second->previousInLine = first;

	printf("\n\n");

	free(first);
	free(second);

	first  = NULL;
	second = NULL;

	return 0;
}
