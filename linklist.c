#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sPerson {
	int age;
	struct sPerson* nextInLine;
};

struct sPerson* getNewPerson(const int age) {
	struct sPerson* newPerson = NULL;
	newPerson = malloc(sizeof(struct sPerson));
	if (newPerson != NULL) {
		newPerson->nextInLine = NULL;
		newPerson->age = age;
		printf("Created new person at %p\n", newPerson);
	}
	else {
		printf("Memory Allocation Failed.\n");
	}
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

void printList(const struct sPerson* list) {
	printf("Printing List:\n");
	const struct sPerson* t;
	t = list;
	if(t == NULL) {
		printf("list is empty\n");
	}
	else {
		while(t) {
			printPerson(t, "t");
			t = t->nextInLine;
		}
	}
}

void cleanUp(struct sPerson *list) {
	struct sPerson* next;
	while(list) {
		next = list->nextInLine;
		printf("Cleaning up %d\n", list->age);
		free(list);
		list = next;
	}
}

int main() {
	printf("\n\n[START]\n\n");

	struct sPerson* first = NULL;
	struct sPerson* added = NULL;

	char command[64];
	int age;
	// main loop
	while(1) {
		printf("Enter a command (exit or print) or value (number): ");
		fgets(command, 64, stdin);
		if(!strcmp("exit\n", command)) {
			printf("Exiting...\n");
			break;
		}
		else if (!strcmp("print\n", command)) {
			// printf("Printing...\n");
			printList(first);
		}
		else if(sscanf(command, "%d", &age)) {
			printf("Adding %d\n", age);
			if(first == NULL) {
				first = getNewPerson(age);
				if(first != NULL) {
					added = first;
				}
			}
			else {
				added->nextInLine = getNewPerson(age);
				if(added->nextInLine != NULL) {
					added = added->nextInLine;
				}
			}
		}
	}

	cleanUp(first);

	first = NULL;
	added = NULL;

	return 0;
}
