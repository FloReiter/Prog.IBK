// Das Programm zeigt die Anwendung von Arrays...

#include <stdio.h>
#include <stdlib.h>

int main(){		
	unsigned it;		// unsigned: natürliche Zahl, kein Vorzeichen

	int mostzero[10] = {1, 2};					//1. und 2. wird so benannt, Rest=0
	int nolength[] = {1,2,3,4,5,6,7,8,9,10};	//keine Größe erforderlich, alle eingegeben
	int somesixes[10] = { [2]=6, [5 ... 8]=6};	//beide kombiniert‌
	
	for(it=0; it < sizeof(mostzero)/sizeof(mostzero[0]); it++)
		printf(
			"mostzero[%i]: %2f	nolength[%i]: %2i	somesixes[%i]: %2i\n",
			it, mostzero[it],	it, nolength[it],	it, somesixes[it]
			);

	printf("mostzero[12]: %2i\n", mostzero[12]);

	printf("Der gefragte Ausdruck ergibt: %lu \n", sizeof(mostzero)/sizeof(mostzero[0]));
	
	return 0;
}
