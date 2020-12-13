#include <stdio.h>
#include <stdlib.h>

int main() {

    typedef struct node {
	int val;
	struct node* next;
    } node_t;


    void printList(node_t* head) {
	while(head) {
		printf("Address: %p, Value: %d\n", head, head->val); 
		head = head->next;
        }
    }

    void rmByValue(node_t** head, int val) {

	node_t* previous = NULL;
	node_t* current = NULL;
	node_t* temp = NULL;

        if((*head)->val == val) {
		temp = *head; *head = (*head)->next;
		free(temp);
        }

        previous = *head; current = (*head)->next;

        while(current) {
		if(current->val == val) {
			previous->next = current->next;
			free(current);
            	}
        	previous = current;
		current = current->next;
        }
    }

    node_t* one = malloc(sizeof(node_t));
    node_t* two = malloc(sizeof(node_t));
    node_t* three = malloc(sizeof(node_t));
    node_t* four = malloc(sizeof(node_t));
    node_t* start = one;

    one->val = 1;
    one->next = two;
    two->val = 2;
    two->next = three;
    three->val = 3;
    three->next = four;
    four->val = 4;
    four->next = NULL;

    printList(start); printf("---------------------------------\n");

    rmByValue(&start, 3);

    printList(start);
}
