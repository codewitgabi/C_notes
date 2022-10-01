// use this for standard input and output
#include <stdio.h>

// Use this to use boolean values
#include <stdbool.h>

int main()
{
	// Data Types

	int a = 15; // %d

	float b = 45.123456; // stores up to 6-7 decimal places %f
	double c = 3.123456789098765; // stores up to 15-16 decimal places %lf or %0.15
	
	// using char for strings

	char d = 'j'; // %c can only store a single string and must be in single quote use %d for ascii value
	// to store more than one character string, use;
	char e[] = "codewitgabi"; // array of characters
	
	// char for numbers
	
	signed char f = 129; // returns ascii representation similar to ord() and chr() in python %c or %d range(-128 === 127)
	unsigned char g = 300; // stores only positive value numbers %d or %c range(0 === 255)

	bool h = true; // %d

	short int i = 32768; // range(-32,768,  +32,767) %d can be references without the int
	unsigned short int j = 65535; // range(0, +65,535) %d can also be referenced without the int
	
	signed int k = 2526282; // ranges from -2.1 billion to + 2.1 billion %d
	unsigned int l = 627282223; // ranges from 0 to 4.1 billion %u
	
	long long int m = -627822938373; //  ranges from -9quintillion to +9quintillion %lld
	
	unsigned long long int n = 1883648739284646462U; // ranges from 0 to +18quintillion %llu

	//printf("int a == %d\n", a);
	printf("float b == %f\n", b);
	printf("double c == %0.15f\n", c);
	printf("char d === %c\n", d);
	printf("char e === %s\n", e);
	printf("signed char f === %d\n", f);
	printf("unsigned char g == %d\n", g);
	printf("bool h === %d\n", h);
	printf("short int i === %d\n", i);
	printf("unsigned short int j === %d\n", j);
	printf("signed int k === %d\n", k);
	printf("unsigned int l === %u\n", l);
	printf("long long int m === %lld\n", m);
	printf("unsigned long long int n === %llu\n", n);
}