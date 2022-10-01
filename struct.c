#include <stdio.h>
#include <string.h>

/*
	:structs are similar to classes in other languages but they have members rather than methods.
*/

struct Player {
	char name[15];
	int score;
};

int main () {
	
	// Instanciating structs
	struct Player player1;
	
	// OR
	
	struct Player player2 = {"codewitgabi", 25};
	
	strcpy(player1.name, "coder");
	player1.score = 5;
	
	printf("%s\n", player2.name);
	printf("%d\n", player2.score);
	
	return 0;
	
}