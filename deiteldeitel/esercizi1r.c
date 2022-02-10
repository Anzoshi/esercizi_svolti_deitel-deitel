/*
Scrivere un programma che riceva in in input un numero da cinque cifre e lo stampi separato da tre spazi.
*/
#include <stdio.h>
int main(int argc, const char * argv[]) {
	
	int A;
	int B;
	int C;
	int D;
	int E;
		
		puts("inserisci il primo numero:");
			scanf("%d", &A);
			
		puts("inserisci il secondo numero:");
			scanf("%d", &B);
			
		puts("inserisci il terzo numero:");
			scanf("%d", &C);
			
		puts("inserisci il quarto numero:");
			scanf("%d", &D);
			
		puts("inserisci il quinto numero:");
			scanf("%d", &E);
			puts("");
		
		printf("%d%3d%3d%3d%3d", A, B, C, D, E);
		
		return 0; }