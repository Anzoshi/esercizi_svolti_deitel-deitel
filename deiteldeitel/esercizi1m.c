/*
Scrivere un programma che che legga un intero e determini e stampi se sia dispari o pari.
*/
#include <stdio.h>
int main (int argc, const char * argv[]) {

	int A;
			puts("inserisci un intero:");
			scanf("%d",&A);
			printf("\n");
			
			if (A%2==0)
				printf("%s%d\n","il numero inserito è pari: ", A);
			
			else if(A%2!=0)
				printf("%s%d","il numero inserito è dispari: ", A);
			
			return 0; }
			
			