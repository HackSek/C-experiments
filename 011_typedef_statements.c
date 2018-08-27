#include <stdio.h>

/*
 * typedef is a C language keyword that can be used to give a data type a new name.
 * You can use typedef to give a name to user defined data types as well, such as structures. 
 */

// this is an example on how to use typedef with structure to define a new data type.
typedef struct atoms {
	int atomic_number;
	double atomic_mass;
} ATOM;

int main(int argc, char *argv[]) {

	// that data type can now be used to define structure variables directly as follows.
	ATOM carbon;

	carbon.atomic_number = 6;
	carbon.atomic_mass = 1.660539040E-24;

	printf("carbon is an atom that has an atomic number value of %d, and an atomic mass value of %g.\n", carbon.atomic_number, carbon.atomic_mass);

	return 0;
}