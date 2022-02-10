/*
Scriver un programma che riceva in inmput due date e stampi quella più recente (nel formato dd/mm/yyyy
*/
#include <stdio.h>

int main (int argc, const char * argv[]) {

	int g1, m1, a1;
	int g2, m2, a2;
	int data1, data2;
	
		puts("Inserisci la prima data: ");
			scanf("%d%d%d", &g1, &m1, &a1); // si può anche scrivere in questa maniera all'interno della scanf direttamente: %d/%d/%d 
			printf("%s%d/%d/%d\n","La prima data è: ", g1, m1, a1);
		
		puts("Inserisci la seconda data: ");
			scanf("%d%d%d", &g2, &m2, &a2);
			printf("%s%d/%d/%d\n", "La seconda data è: ", g2, m2, a2);
			
			data1 = g1 + m1 + a1;
			data2 = g2 + m2 + a2;
			
			if ( data1 > data2 ) 
			
				printf("%s%d/%d/%d\n", "Questa è la data più recente: ", g1, m1, a1);
				
			else 
			
				printf("%s%d/%d/%d", "Questa è la data più recente: ", g2, m2, a2);
		
		
return 0; }