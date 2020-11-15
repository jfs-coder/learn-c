#include <stdio.h>

void guessNumber(int guess) {
	if (guess == 555) {printf("Correct. You guessed it!\n");}
	if (guess < 555)  {printf("Your guess is too low.\n");}
	if (guess > 555)  {printf("Your guess is too high.\n");}
}

int main() {
	printf("Hello, World!\n");

	guessNumber(500); guessNumber(600); guessNumber(555);

	int target = 10;
	if (target == 10) { printf("Target is equal to 10\n"); }

	int foo = 1, bar = 2;

	if (foo < bar) {printf("foo is smaller than bar.\n");}
	if (foo > bar) {printf("foo is larger than bar.\n");}

	/* with else this time */
	if (foo == 20) {printf("foo is equal to 20.\n");}
	else printf("foo is not equal to 20.\n");

	int peanuts_eaten = 22;
	int peanuts_in_jar = 100;
	int max_peanut_limit = 50;

	if (peanuts_in_jar > 80) {
	    if (peanuts_eaten < max_peanut_limit) {
	        printf("Take as many peanuts as you want!\n");
	    }
	} else {
	    if (peanuts_eaten > peanuts_in_jar) {
	        printf("You can't have anymore peanuts!\n");
	    }
	    else {
	        printf("Alright, just one more peanut.\n");
	    }
	}

	/* && and ||   (AND and OR) */

	int fool = 1, barb = 2, moop = 3;

	if (fool < barb && moop > barb) {printf("fool is smaller than barb AND moop is larger than barb.\n");}
	if (fool < barb || moop > barb) {printf("fool is smaller than barb OR moop is larger than barb.\n");}

	int docker = 9; if (docker != 10) {printf("Docker is not equal to 10.\n");}

	return 0;
}

