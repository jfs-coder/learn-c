#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_by_value(node_t ** head, int val) {
    node_t * current  = NULL;
    node_t * previous = NULL;

    // if the first node contains the val we are looking for, simply pop() it.
    if( (*head)->val == val ) {
        return pop(head);
    }
    // [_1][_2][p_3][c_4]  4
    previous = *head;
    current  = (*head)->next;
    while(current != NULL) {
        if(current->val == val) {
            previous->next = current->next;
            free(current);
            return val;
        }
        previous = current;
        current = current->next;
    }

    return 0;
}

int main() {

    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 2);

    print_list(test_list);
}
