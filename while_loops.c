#include <stdio.h>

int main(int argc, char *argv[]) {

	int iterator = 0;

	// A while loop in C programming repeatedly executes a set of statements as long as the given condition is true.
	while (iterator <= 10) {
		printf("%d\n", iterator);
		iterator++;
	}

	int iterator_2 = 9;

	/* 
	 * the do...while loop checks the condition after executing the command instead of doing it before.
	 * A do...while loop is similar to a while loop, but it is guaranteed to execute at least one time.
	 */

	do {
		printf("The set of commands within the 'do' statement will get executed before the while condition gets executed.\n");
	} while (iterator_2 != 9);

	return 0;

}