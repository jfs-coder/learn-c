#include <stdio.h>

int main() {

	int arr[] = {1, 2, 3, 4};
	int *ptr   = &arr[0];

	printf("*ptr: %d\n", *ptr);
	printf("arr[0]: %d\n", arr[0]);
	printf("*(arr): %d\n", *(arr));
	printf("ptr: %u\n", ptr);
	printf("&arr[0]: %u\n", &arr[0]);

	printf("*ptr + 1: %d\n", *ptr + 1);
	printf("arr + 1: %u\n", arr + 1);
	printf("*(arr + 1): %d\n", *(arr + 1));
	
	return 0;
}
