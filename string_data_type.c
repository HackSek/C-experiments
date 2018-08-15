#include <stdio.h>

int main(int argc, char *argv[])
{

	/* 
	* A string is fundamentally an array of characters.
	* We need to specify the length of the string array when declaring it.
	* We have to also add one to the total length as each string has to be ended by the string terminator character '\0'.
	* We should always remember that arrays in C follow zero-based numbering => they start at 0.   
	*/

	char warning[12] = "Be careful!";

	// Since the string is basically an array, we can select a single character by its index like the example below
	printf("%c is for: %s\n", warning[10], warning);

	return 0;

}