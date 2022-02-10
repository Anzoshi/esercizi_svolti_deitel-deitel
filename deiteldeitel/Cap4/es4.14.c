/*
Calclolare il fattoriale di un numero prima con un struttura iterativa e poi con la ricorsione (cap5).
*/
#include <stdio.h>

int iterativa (int x);
unsigned long long int ricorsione (unsigned int x);

int main (int argc, const char * argv[]) 
{
	int y;
	int x;
	
		puts("inserisci un numero");
		scanf("%d", &y);
		
		puts("struttura iterativa: ");
		printf("\n%d", iterativa(y));
		
		puts("");
		
		puts("\ninserisci il secondo numero");
		scanf("%d", &x);
		
		puts("\nstruttura ricorsiva: ");
		printf("\n%llu", ricorsione(x));
		
	return 0;
}


int iterativa (int x)
{	
	int count;
	int factorial = 1;
	//int y;
			
		//puts("inserisci un valore");
		//scanf("%d", &y);	
		
			
			for (count = x; count >= 1; --count)
			{
			factorial *= count;
			}
			return factorial;
}
unsigned long long int ricorsione (unsigned int x)
{ 
	if (0 == x || 1 == x)
		return 1;
	else 
	return (x * ricorsione( x -1));
}









				