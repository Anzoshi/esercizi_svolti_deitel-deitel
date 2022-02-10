/*
Scrivere un programma che legga due interi e determini e stampi se il primo è un multiplo del secondo.
*/
#include <stdio.h>
int main(int argc, const char * argv[]) {
	
	int A;
	int B;
		
		puts("Inserisci il primo numero:");
		scanf("%d", &A);
		
		puts("Inserisci il secondo numero:");
		scanf("%d", &B);
		
		if(A % B == 0)
			printf("%d%s%d\n", B, " è un multiplo di ", A);
		
		else 
			printf("%d%s%d\n", B, " non è un multiplo di ", A);	
		
		return 0; }