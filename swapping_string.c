#include <stdio.h>
#include <string.h>


int main () {
	
	// Swapping Array of String
	
	char name[20] = "codewitgabi";
	char address[20] = "offa rd";
	char temp[20];
	
	strcpy(temp, name);
	strcpy(name, address);
	strcpy(address, temp);
	
	printf("%s\n", name);
	
	return 0;
}