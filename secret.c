#include <stdio.h>
#include <string.h>

int main() {

	int message[] = {4, -3, 7, 0, 3, -79, 87, -8, 3, -6, -8, -90};
	int key = 100;

	for(int i = 0; i < 13; i++) {
		key += message[i];
		printf("%c", key);
	}

	return 0;
}


