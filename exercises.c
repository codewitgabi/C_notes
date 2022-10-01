#include <stdio.h>


int main () {
	
	int num = 9, step = 0;
	
	if (num >= 0) {
		printf("%d\n", num);
		while (num != 1) {
			if (num % 2 == 0) {
				num = num / 2;
				printf("%d\n", num);
			} else if (num % 2 == 1) {
				num = (num * 3) + 1;
				printf("%d\n", num);
			}
			step++;
		}
	}
	
	printf("\nSteps: %d\n", step);
	
	return 0;
}