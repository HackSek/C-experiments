#include <stdio.h>

// We can actually assign pointers even to functions.
int multiplication(int first, int second); 

int main(int argc, char *argv[]) {

	printf("Please insert a number: ");
	int a;
	scanf("%d", &a);

	printf("What number would you like to multiply it by? ");
	int b;
	scanf("%d", &b);


	// Here's an example on how to declare a function pointer.
	int (*function_pointer) (int, int);

	/*
	 * The blueprint syntax is as follows:
	 * returned_value_data_type (* pointer_function_name) (pointed function arguments data types)
	 */

	// the pointer function needs to be assigned the memory location of the function that it'll point to.
	function_pointer = &multiplication;

	// the pointer function can now be invoked and passed arguments just as in the normal function call.
	int returned_value = function_pointer(a, b);
	
	printf("the product of those two numbers is %d.\n", returned_value);

	return 0;
}

int multiplication(int first, int second) {
	int product = first * second;
	return product;
}