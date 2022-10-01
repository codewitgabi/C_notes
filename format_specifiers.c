#include <stdio.h>


int main () {
	/*
		:format specifiers
		:%d   : decimal
		:%f    : float
		:%c   : char
		:%s   : string characters
		:%.2  : decimal precision
		:%1   : text alignment to the right
		:%-    : text alignment to the left
		:%1f : double
	*/
	
	float item1 = 23.45;
	float item2 = 10.8;
	
	printf("Item1 : $%10.2f\n", item1);
	printf("Item2 : $%-10.2f\n", item2);
	
	return 0;
}