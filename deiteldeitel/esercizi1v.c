/*
Scrivere un programma che calcoli quanto denaro si spende quotidianamentedi carburante, e calcolare quanto si risparmia con il car pooling:
input:
miglia percorsi al giorno
costo di carburante per gallone
media delle miglia per gallone
costo del posteggio al giorno
pedaggi al giorno.

PSEUDOCODICE:

quanto si risparmia con il car pooling



*/
#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {

	double miglia;
	double gallone = 3.35;
	double media;
	double park = 1;
	double pedagg;
	double tot;
			
			printf("inserisci le miglia:)) percorse al giorno ");
			scanf("%lf", &miglia);
			printf("\n");
			
			printf ("inserisci le ore in cui la macchina è stata posteggiata in un parcheggio a pagamento ");
			scanf("%lf", &park);
			printf("\n");
			
			printf("inserisci il costo del pedaggio ");
			scanf("%lf", &pedagg);
			printf("\n");
			
		        media = ( miglia * gallone) /  2;
		        
		        printf("%lf", media);
		        printf("\n");
		        
		        tot = media + park + pedagg;
		        
		        
		        printf("%s\n%lf\n", "la spesa totale è: ", tot);
		        
		        // con il car pooling invece...		
		     
		        tot = tot - ( park + pedagg );
		        tot /= 2;
		        printf("%s\n%.6f", "il totale invece con il car pooling è: ", tot);
			
		
				return 0; }