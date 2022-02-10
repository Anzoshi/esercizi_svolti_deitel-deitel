/*
calcolo delle vendite: si scriva un programma che legga una serie di coppie di numeri, ovvero "numero prodotto" e "quantità venduta in un giorno". Inoltre deve mandare in output tutti i prodotti venduti nell'ultima settimana. 
*/
#include <stdio.h>
int main(int argc, const char * argv[])
{
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	
	puts("insrisci il numero del prodotto comprato: ");
	puts("inserisci l'EOF per chiudere il programma");
	
	float tot1 = 2.98;
	float tot2 = 4.50;
	float tot3 = 9.98;
	float tot4 = 4.49;
	float tot5 = 6.87;
	
	int number;
	
	while( number != EOF)
	{
	scanf("%d", &number);
	if (number != EOF) 
		{
		switch (number)
		{
		case 1:
		++count1;
		break;
		
		case 2:
		++count2;
		break;
		
		case 3:
		++count3;
		break;
		
		case 4:
		count4 += 1;
		break;
		
		case 5:
		count5++;
		break;
		
		default: //problema con il default, se sono aggiune lettere il ciclo và all'infinito e il default non funge
		printf("%s", "errore");
		puts("\ninserire nuovamente il prodotto");
		break;
		}
		}
	}
	
	puts("totale prodotti venduti: ");
	
	printf("\n1 : %d", count1);
        printf("\n2 : %d", count2);
	printf("\n3 : %d", count3);
	printf("\n4 : %d", count4);
	printf("\n5 : %d", count5);
	
	puts("\nguadagno totale per preodotto");
	
	printf("\n1 : %.2f£", count1 * tot1);
        printf("\n2 : %.2f£", count2 * tot2);
	printf("\n3 : %.2f£", count3 * tot3);
	printf("\n4 : %.2f£", count4 * tot4);
	printf("\n5 : %.2f£", count5 * tot5);
		



return 0;
}