#include <stdio.h>

int main(int argc, char *argv[]) {

	int myInt = 25;

	/*
	 * the address-of operator "&" allows us to select the memory address in which the variable 'myInt' is stored.
	 * we then assign that memory address to a variable called 'myPointer'.
	 * we specify a pointer data type by inserting an asterisk before the variable name.
	 * the pointer will then be assigned whatever value that's stored in the memory address mentioned above.
	 */

	int *myPointer = &myInt;

	// the format character for a memory address or memory unit is '%p'
	printf("the variable myInt equals %d, it is stored in te following memory address: %p.\n", myInt, myPointer);
	printf("since its memory address had been assigned to a pointer, that pointer's assigned value will also be %d.\n", *myPointer);

	return 0;

}