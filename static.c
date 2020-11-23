#include <stdio.h>

/* By default variables are local to the scope in which they are defined.
 * Variables can be declared as static to increase their scope up to file 
 * containing them. As as result these variables can be accessed anywhere 
 * inside the file.

/* Here you will see that the count variable is removed from memory 
 * as soon as the function completes. */
int runner() {
	int count = 0;
	count++;
	return count;
}

/* but if we use keyword <static> it keeps the value in memory */
int static_runner() {
	static int st_count = 0;
	st_count++;
	return st_count;
}

int main() {
	printf("%d\n", runner());
	printf("%d\n", runner());
	printf("%d\n", static_runner());
	printf("%d\n", static_runner());
	return 0;
}

