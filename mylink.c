#include <stdio.h>
#include <stdlib.h>

struct car { char* model; int year; int price; struct car* next; };

void printList(struct car* tmp) {
	while(tmp != NULL) {
		printf("Addrs: %p\n", tmp);
		printf("Model: %s\n", tmp->model);
		printf("Year : %d\n", tmp->year);
		printf("Price: %d\n", tmp->price);
		printf("Next : %p\n", tmp->next);
		printf("--------------------------------\n");
		tmp = tmp->next;
	}
}

struct car* addCar(char* model, int year, int price, struct car* next) {

	struct car* newcar = malloc(sizeof(struct car));
	newcar->model = model;
	newcar->year  = year;
	newcar->price = price;
	newcar->next  = next;

	return newcar;
}

int main() {

	struct car* car1 = addCar("Buick", 2018, 10000, NULL);
	struct car* car2 = addCar("Accent", 2013, 13000, NULL);
	struct car* car3 = addCar("Ford", 2007, 6999, NULL);
	struct car* car4 = addCar("Nissan", 2001, 2999, NULL);

	car1->next = car2; car2->next = car3; car3->next = car4;

	printf("\n\n");
	printList(car1);
	printf("\n\n");

	free(car1); free(car2); free(car3); free(car4); 
	car1 = NULL; car2 = NULL; car3 = NULL; car4 = NULL;

	return 0;
}
