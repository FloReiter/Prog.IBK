// Verwendet Zeiger!

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	if( argc != 2) {
		printf("Bitte nur Eine Zahl eingeben, Danke...\n");
		return 1;
	}

	int zahl = atof(argv[1]);

	int *pointer;			//Zeiger mit * definiert
	pointer = &zahl;		//Zeiger (hier "pointer") mit & auf eine Zahl (hier "zahl") gesetzt
	
	printf("Wert des Zeigers: %i\n", *pointer);		//output
	
	return 0;
}
