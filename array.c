#include <stdio.h>


int main () {
	
	// Arrays
	
	float array[6] = {2.3, 4.4, 0.8, 2.1}; // always specify the size of the array.
	
	array[4] = 5;
	array[5] = 3.4;
	
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		printf("%.1f\n", array[i]);
	}
	
	// Array of characters
	
	char string_array[][20] = {"Michael", "codewitgabi"};
	// the second square bracket must be specified.
	int string_array_length = sizeof(string_array) / sizeof(string_array[0]);
	
	for (int i = 0; i < string_array_length; i++) {
		printf("%s\n", string_array[i]);
	}
	
	return 0;
}