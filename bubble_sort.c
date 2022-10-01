#include <stdio.h>


int main () {
	
	int array[] = {7,9,0,7,9,6,3,5,7,9};
	
	int swap;
	int length_of_array = sizeof(array)/sizeof(array[0]);
	
	for (int i=length_of_array -1; i >= 0; i--) {
		for (int j=0; j < i; j++) {
			if (array[j+1] < array[j]) {
				swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		}
	}
	
	for (int m = 0; m < length_of_array; m++){
		printf("%d\n", array[m]);
	}
	
	return 0;
}

