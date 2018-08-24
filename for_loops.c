#include <stdio.h>

int main(int argc, char *argv[]) {

	int countdown_start;
	printf("What number would you like your countdown to start from? ");
	scanf("%d", & countdown_start);
	int iterator;

	/* 
	 * A for loop is another "conditional" statement.
	 * It allows us to write sets of statements that need to be executed again and again for a specific number of times.
	 * 
	 * A for loop statement requires 3 parameters, an initialization step, a condition, and an increment statement.
	 * 
	 * The initialization step is executed first, and only once.
	 * It allows us to initialize any variable that'll control the loop.
	 *
	 * Next, the condition is evaluated. 
	 * If it is true, the body of the loop is executed, otherwise it won't.
	 * 
	 * After the execution of the body, the increment statement will be executed.
	 * This statement allows us to update the loop control variables.

	 * The condition gets evaluated again. If it is true, the loop executes and the process repeats itself.
	 * Otherwise the loop breaks, in other words, it "terminates".
	 */

	for (iterator = countdown_start; iterator >= 0; iterator--) {
		printf("%d\n", iterator);
	}

	return 0;

}