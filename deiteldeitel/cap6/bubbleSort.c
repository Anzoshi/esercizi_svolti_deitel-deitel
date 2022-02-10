/*
 esso è un algoritmo che ordina un dato array, facendo n - 1 confronti, ove n è il numero di elementi nell'array:;
*/

#include <stdio.h> 
#define SIZE 10

void bubbleSort (unsigned int vet[], int size);

int main (int argc, const char * argv[])

{
	unsigned int a [SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	
	puts("data items in original order");
	
	for (size_t i = 0; i < SIZE; i++)
	{
	
		printf("\n%s%u%s\t%u\n", "il numero in posizione ", i, " è: ", a[i]);
	}
	
	bubbleSort(a, SIZE);
	
	puts("");
	puts("I dati ordinati tramite il bubble sort: ");
	
	for (size_t  i = 0; i < SIZE; i++)
	{
		printf("\n%s%u%s\t%u\n", "il numero in posizione ", i, " è: ", a[i]);
	}	
	
	
	return 0;
}

void bubbleSort (unsigned int vet[], int size)
{
	for (size_t outpass = 1; outpass < size; outpass++) // passata n _ invariante = outpass <  SIZE
		
	{
			for(size_t inpass = 0; inpass < size; inpass++) // (size_t inpass = (SIZE - 1); inpass > 0; inpass--) 			passata n __ Invariante = inpass < SIZE.
			{	
				if (vet[inpass] > vet[inpass +1])   
				{
					unsigned int hold = vet[inpass];
					vet[inpass] = vet[inpass + 1];
					vet[inpass + 1] = hold;
				}
			}
			
	}

	return; // complessita O(n*n) --> n = size --> O(SIZE * SIZE).
}








