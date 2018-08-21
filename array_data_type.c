#include <stdio.h>

int main(int argc, char *argv[]) {

	/*
	 * An array is a collection of data from the same data type.
	 * Each item of an array has an index to differentiate it, starting from 0.
	 */
	int array_1[3];

	// This is one method to declare values of an array.
	array_1[0] = 12;
	array_1[1] = 24;
	array_1[2] = 36;

	// This is amother method to declare values of an array.
	int array_2[3] = { 36, 24, 12 };

	printf("The respective values of the first array are %d, %d and %d.\n", array_1[0], array_1[1], array_1[2]);
	printf("The respective values of the second array are %d, %d and %d.\n", array_2[0], array_2[1], array_2[2]);

	return 0;

}