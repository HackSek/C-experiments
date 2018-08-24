#include <stdio.h>

int main(int argc, char *argv[]) {

	/* A structure is another data type available in C that allows us to combine data items of different data types. */

	// Here's how to define a structure.
	struct {
		int my_struct_num;
		float my_struct_float;
	} my_struct;


	// Here's how to access any member of a structure.
	my_struct.my_struct_num = 10;
	my_struct.my_struct_float = 0.1;

	printf("%f // %d\n", my_struct.my_struct_float, my_struct.my_struct_num);

	return 0;

}