/*
Scrivere in 4 modi differenti l'istruzione che sommi 1 alla variabile intera. 
*/
#include <stdio.h>

int main (int argc, const char * argv[]) {

	int i; // i = var.
		
		puts("inserire un numero: ");
		scanf("%d", &i);
		
			i = i + 1;
				printf("%s%d","metodo 1--> i = i + 1: ", i);
			
			
			i += 1;
				printf("\n%s%d", "metodo 2--> i += 1: ", i);
			
			
			i++;
				printf("\n%s%d", "metodo 3--> i++: ", i);
			
		
			++i;
				printf("\n%s%d", "metodo 4--> ++i: ", i);
			
			return 0; }
			
				
			
			
