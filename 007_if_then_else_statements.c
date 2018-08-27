#include <stdio.h>

int main(int argc, char *argv[]) {

	int a;
	printf("What's the first number you'd like to compare?\n");
	scanf("%d", &a);

	int b;
	printf("What's the second number you'd like to compare?\n");
	scanf("%d", &b);

	// The if statement executes a set of commands if a specified condition is true.
	if (a > b) {
		printf("the first number (%d) is greater than the second number (%d).\n", a, b);
	// If the condition is false, this set of commands will be executed if the condition is true.
	} else if (a < b) {
		printf("the first number (%d) is less than the second number (%d).\n", a, b);
	// If all the conditions above weren't met, this set of commands will be executed.
	} else {
		printf("the first number (%d) and the second number (%d) are equal.\n", a, b);
	}

	/*
	 * The if/else statement is one of many "Conditional" Statements
	 * sets of commands within these statements are executed based on different conditions, only if they're met.
	 */
	
	return 0;

}