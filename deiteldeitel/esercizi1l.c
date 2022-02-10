/*
Scrivere un programma che legga tre interi e poi determini e stampi il maggiore e il minore del gruppo.
*/
#include <stdio.h>
int main (int argc, const char * argv[]) {

	int A;
	int B;
	int C;
			printf("%s\n","inserisci tre numeri: ");
			scanf("%d%d%d",&A, &B, &C);
			
			if (A>B && B>C) 
				printf("\n%s%d %s%d\n","il numero più grande è: ", A, "mentre il numero più piccolo è: ", C);
			
			else if (A>C && C>B)	
				printf("\n%s%d %s%d\n","il numero più grande è: ", A, "mentre il numero più piccolo è: ", B);
			
			else if  (B>A && A>C) 
				printf("%s%d%s%d\n","il numero più grande è: ",B, "il numero più piccolo è: ", C);
			
			else if(B>C && C>A)
				printf("\n%s%d %s%d\n","il numero più grande è: ", B, "mentre il numero più piccolo è: ", A);
				
			
			else if (C>A && A>B)
				printf("%s%d %s%d\n","il numero più grande è: ", C,"il numero più piccolo è: ", B);
			
			else if (C>B && B>A)
				printf("%s%d %s%d","il numero più grande è: ", C, "il numero più piccolo è: ", A);
				
			return 0; }
			
				