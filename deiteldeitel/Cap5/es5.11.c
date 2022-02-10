/*
Scrivere quattro funzioni che arrotondino il valore:
1) roundToInteger--> arrotonda all'intero
2) roundToTenths--> arrotonda ai decimali
3) roundToHundreths--> arrotonda ai centesimi
4) roundToThousandths--> arrotonda ai millesimi
avvalersi di floor presente nella libreria math.h per l'arrotondamento:
ad esempio: y = floor (x * 100 + .5) / 100; arrotonda ai centesimi
*/

#include <stdio.h>
#include <math.h>

void roundToIntegers( int number);
void roundToTenths( int number);
void roundToHundreths( int number);
void roundToThosandths( int number);

int main(void)
{
	int y;
	int x;
		
		puts("inserisci un numero: ");
		scanf("%d" , &x);
		
		roundToIntegers(x);
		printf("%s%d","numero prima di essere arrotondato a intero: ", x);
		printf("\n%s%d","numero arrotondato a intero: ", y);


	return 0;
	
}
	
	void roundToIntegers( int number)
{	
	int y;
	int x;
	
	y = floor (x + .5);
	
	return;
}
	
	
	
	
	
	
	
	
	
	
	
	