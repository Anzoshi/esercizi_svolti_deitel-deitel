/*
 esso è un algoritmo che ordina un dato array, facendo n - 1 confronti, ove n è il numero di elementi nell'array:;
*/

#include <stdio.h>
#include <stdlib.h> 
#define SIZE 10

void bubbleSort (unsigned int vet[]);
size_t binarySearch (const unsigned int vet[],int key, size_t low, size_t high);

int main (int argc, const char *argv[])
{
	int a[] = {1, 3, 2, 6, 4, 7, 5, 10, 9, 8};
	int key;
		
		for (size_t count; count < SIZE; count++)
		{
			printf ("%d\t", a[count]);
		}
		
		bubbleSort(a);
		
		puts("");
		puts("vettore ordinato con bubble sort:");
		
		for (size_t count = 0; count < SIZE; count++)
		{
			printf("%d\t", a[count]);
		}
		
		puts("");
		puts("inserisci un valore da cercare nel vettore:");
		scanf("%d", &key);
		
		int keyRes = binarySearch(a, key, 0, SIZE-1); // keyRes è la posizione del vettore in cui è trovato il numero, e se non è trovato restituisce -1.
		
		puts("");
		
		printf("%s\t%d", "questo è il numero trovato:", key); //key invece restituisce il valore cercato e non la posizione, deve essere abinato a exit(0), e non a return.

	return 0;
}
void bubbleSort(unsigned int vet[])
{
	for(size_t countOut= 0; countOut < SIZE; countOut++)
	{
		for (size_t count = 0; count <SIZE; count++)
		{
			if(vet[count] > vet[count + 1])
			{	
				int hold = vet[count];
				vet[count] = vet[count + 1];
				vet[count + 1] = hold;
			}
		}
	}
	return;
}
size_t binarySearch (const unsigned int vet[], int key, size_t low, size_t high)

{	
	
	while (low <= high)
	{
		size_t mid  = (low + high) / 2;
		
		if (vet[mid] == key)
			return mid; 
		
		else if (key < vet[mid])
			high = mid -1;
		
		else 
			low = mid + 1;
	}
		puts("numero non presente nel vettore");
			
			exit(0);
			//return -1;
}

















