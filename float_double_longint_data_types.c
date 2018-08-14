#include <stdio.h>

int main(int argc, char *argv[]) {

	char myChar = 'A';
	int myInt = 9;
	long int myLongInt = 6475982091;
	float myFloat = 1.8;
	double myDouble = 1.874563;

	printf("the character data type is used to store characters that are %lu byte long, an example of such data type is: %c\n", sizeof(char), myChar);
	printf("the integer data type is used to store whole numbers that are %lu bytes long, an example of such data type is: %d\n", sizeof(int), myInt);
	printf("the long integer data type is used to store bigger whole numbers that are %lu bytes long, an example of such data type is: %ld\n", sizeof(long int), myLongInt);
	printf("the float data type is used to store numbers with decimal values that are %lu bytes long, an example of such data type is: %f\n", sizeof(float), myFloat);
	printf("the double data type is used to store bigger numbers with decimal values that are %lu bytes long, an example of such data type is: %f\n", sizeof(double), myDouble);

	return 0;

}