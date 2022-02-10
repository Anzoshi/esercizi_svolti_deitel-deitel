/*
a) Sommare i numeri interi dispari  tra 1 - 99 usare un' istruzione for . Utilizzare variabili intere sum e count senza segno.
b) Stampare il valore 333.546372 con un' ampiezza di campo (spazi) di 15 caratteri con precisioni 1, 2, 3, 4, 5 (numeri dopo la virgola). Allineare a sinistra l'output. Quali sono i cinque valori che sono stampati.
c) Calcolare il valore di 2.5 elevato alla potenza di tre usando la funzione pow. Stampare il risultato con una precisone di due, con una larghezza di campo di 10 posizioni, Qual'è il valore che viene stampato?
d) Stampare gli interi da 1 a 20 usando un ciclo while e la variabile contatore x. Stampare soltanto 5 interi per riga. [usare il calcolo x % 5. Quando il valore di questo è zero, stampare un carattere newline , altrimenti stampare un carattere tab.]
e) Ripetere l'esercizio (d) usando for.
*/
#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {

	unsigned int count ;
	unsigned int sum;
	
		puts("adesso il programma sommerà i numeri interi dispari da 1 a 99");
		
			for (count = 0; count < 100; ++count) {
				if(count % 2 != 0) 
					sum += count ;
						else 
							continue; 
							}
		printf("%s%u\n", "La somma degli interi dispari fino a 99 è: ", sum);
			puts("\n");
		
		puts("adesso il programma stamperà il valore 333.546372");
		
		printf("%15.5f\n", 333.546372);
               	puts("\n");
               	
               	puts("adesso il programma stamperà  2.5 elevato a 3 con precisione 2 e larghezza di campo 10 allineato a destra");
               	
               	printf("%10.2f\n", pow(2.5,3));
               	puts("\n");
               	
               	puts("ora il programma stampare in numeri da 1 a 20, 5 valori per riga per un totale di 4 righe e 5 colonne");
               	
               		int x = 1;
               			while(x<=20) {
               				if( 0 == x % 5) {
               					printf("\t");
               					printf("%d", x);
               					printf("\n");
               						}else{
               							printf("\t");
               							printf("%d", x);
               							}
               				x++;
               							}
               	puts("\n");
               	
               	puts("ora il programma farà la stessa identica cosa ma con un ciclo for");
               	
               		for(x = 1; x<=20; x+=1) {
				if( 0 == x % 5) {
               				printf("\t");
               				printf("%d", x);
               				printf("\n");
               					}else{
               						printf("\t");
               						printf("%d", x);
               						}
               					}              			
               			
               						
				
return 0; }