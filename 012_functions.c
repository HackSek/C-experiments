#include <stdio.h>

/*
 * A function is a group of statements that returns a value after, optionally, performing a task.
 * If the function performs tasks without returning a value, it is called a procedure.
 * Every C program has at least one function, which is main().
 */

// A function declaration tells the compiler about a function's name, return type, and parameters.
int multiplication(int first, int second); 

int main(int argc, char *argv[]) {

	printf("Please insert a number: ");
	int a;
	scanf("%d", &a);

	printf("What number would you like to multiply it by? ");
	int b;
	scanf("%d", &b);

	// This is an example of how to call the function and assigned its returned value to a variable.
	int returned_value = multiplication(a, b);
	printf("the product of those two numbers is %d.\n", returned_value);

	return 0;
}

/* 
 * A function definition provides the actual body of the function.
 * The function declaration and the actual body of the function can be defined separately. 
 */

int multiplication(int first, int second) {
	int product = first * second;
	return product;
}

/* 
 * A function definition provides the actual body of the function.
 * The function declaration and the actual body of the function can be defined separately. 
 */