/*
Scrivere un programma che risolva ricorsivamente il problema delle torri di Hanoi:

	1- tips:
	
a) Spostare n-1 dischi dal piolo 1 al piolo 2 , usando il piolo 3 come supporto temporaneo.
b) Spostare l'ultimo disco (il più grande) dal piolo 1 al piolo 3.
c) spostare gli n - 1 dischi dal piolo 2 al piolo 3, usando il piolo 1 come supporto temporaneo.

	2- pseudo raffinamento top-down (spostamento dei 64 dischi in un altro piolo, 1- potendone spostare uno per volta e 2- non potendo mettere uno maggiore su 		    uno minore).

a) il numero di dischi da spostare (64).
b) il piolo su cui questi dischi sono inizialmente infilati.
c) il piolo nel quale spostare questa pila di dischi.
d) il piolo da usare come supporto temporaneo.	
*/

#include <stdio.h>

unsigned int hanoi (unsigned int ndisk, unsigned int start, unsigned int end);

const int start = 1;
const int end = 3;
const int other = 2;

unsigned int ndisk = 0;


int main (int argc, const char * argv[])

{

 	puts("Torre di Hanoi risolte in un attimo: ")
 	
 	for( ; ndisk < 64; ndisk++)
 	 {
 	 	
 	 }
 	 	
 	
 	
 	
 	/*if(64 == ndisk)
 		printf("%s\t%s\t%s\n", "1", "-->", "3 ");
 	else {
 		printf("%s\t%s\t%s\n","1","-->","2");
 		
 		printf("%s\t%s\t%s\n", "3", "-->", "2");
 		
 		printf("%s\t%s\t%s\n", "3", "-->", "1");
 		
 		printf("%s\t%s\t%s\n", "2", "-->", "1");
 	
 		printf("%s\t%s\t%s\n","2", "-->", "3 "); */
 		
 	
 	

	return 0;
}
unsigned int hanoi  (unsigned int ndisk, unsigned int start, unsigned int end)

	
{
		if (1 == ndisk)
			
	return  printf("%d\t%s\t%d\n", start, "-->", end);

		else if (6 - (start + end) == other)
		
				
	return printf("%d\t%s\t%d\n", start, "-->" other);
		
		else if (ndisk - 1 == ndisk)
		
		
		
		

}







