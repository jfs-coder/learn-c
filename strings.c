#include <stdio.h>
#include <string.h>

int main() {
	char * name = "Meline Richer";
	char sname[] = "Melodie Richer-Simard";
	int age = 27;

	/* prints out 'John Smith is 27 years old.' */
	printf("%s is %d years old.\n", name, age);

	/* strlen() prints out string length, in this case 13 */
	printf("String length: %d\n", strlen(name));

	/* strncmp() compares between two strings returning 0 if equal */
	if(strncmp(name, "Meline Richer", 13) == 0) {
		printf("Hello, Meline!\n");
	}
	else { printf("You are not Meline, go away.\n"); }

	/* strncat appends first n characters of src string to the dest string
	   where 'n' is min(n,length(src));  The arguments passed are dest str
	    source string and n - maximum number of chars to be appended. */
	char dest[20] = "Hello";
	char src [20] = "World";
	strncat(dest, src, 3);
	printf("%s\n", dest);
	strncat(dest,src,20);
	printf("%s\n", dest);

	/* bonus section: I remember this from 1998: printing the pointer
	   address using & */

	char * node = "what";

	printf("Pointer address of variable node...\n");
	printf("Using p: %p\n", (void*) &node);
	printf("Using x: %x\n", &node);
	printf("Using u: %u\n", &node);


	return 0;
}
