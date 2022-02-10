/*
a) Dichiarare che un programma calcolerà il prodotto di tre interi.
b) Richiedere all'utente di inserire i tre interi.
c) Definire le variabili x,y,z e result di tipo int.
d) Leggere tre interi dalla tastiera e memorizzarli nelle variabili x,y,z.
e) definire le variabili result, calcolare il prodotto degli interi nelle variabil x,y,z e utlizzare il risultato per inizilizzare la variabile result
f) Stampare the product is seguito dalla variabile intera result.
*/
#include <stdio.h>

int prodotto(int x, int y, int z);

int main(int argc, const char  * argv[]) {
	
int A, B, C;

		printf("%s\n","questo programma calcolerà il prodotto di tre interi");

int result;
		
		result = prodotto(A, B, C);
		
		puts("the result is");
		printf("%d",result);	

		return 0; }
		
int prodotto(int x, int y, int z) {
int res;
		scanf("%d%d%d",&x,&y,&z);
	res = x * y * z;
		
		return res; }
