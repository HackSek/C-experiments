#include <stdio.h>

int main(int argc, char *argv[]) {


	// the integer data types allows variables to store whole numbers that are 8 bytes long
	int k = 12;
	int c = 8;
	int sum = k + c;

	// the conversion character for integer data is %d and he conversion character for character data is %c
	printf("the value of k is %d, the value of c is %d and their sum equals %d.\n", k, c, sum);

	// the character data type allows variables to store single characters that are 1 byte long, following the ASCII table
	char myChar = 'A';

	// the ASCII table links every character to a numerical value that is its binary representation converted to decimal numbers
	printf("the character %c, according to the ASCII table, has a numerical value of %d\n", myChar, myChar);

	return 0;

}