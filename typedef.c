#include <stdio.h>

typedef char name[25]; // all char arrays of 25bytes can now be called using user instead of typing char user[25] = ???


typedef struct {
	char username[50];
	char password[50];
	int id;
} User;

int main () {
	
	// typedef --- They are used to nickname data-types so that calling them will require lesser code and also enable neat code.
	
	name person1 = "codewitgabi";
	name person2 = "programmer";
	
	printf("%s\n", person2);
	
	
	User user1 = {"Codewitgabi", "1234", 1};
	User user2 = {"Kvng Josh", "0000", 3};
		
	printf("\n%s\n", user1.username);
	printf("%s\n", user1.password);
	printf("%d\n", user1.id);
	
	printf("\n%s\n", user2.username);
	printf("%s\n", user2.password);
	printf("%d\n", user2.id);
	
	
	return 0;
}