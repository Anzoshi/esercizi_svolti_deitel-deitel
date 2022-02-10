/*
Ricerca lineare, utile nei vettori disordinati, ma poco efficace. Certamente meno efficace della ricerca binaria per array ordinati
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

size_t linearSearch (const unsigned int vet[], size_t key);

int main (int argc, const char * argv[])

{ 
	const unsigned int a[] = {1, 3, 2, 6, 4, 7, 5, 8, 9, 10};
	int keyWord;
	int keyRes;
	
	puts("inserisci un numero e verificherò se è presente nell' vettore in questione: ");
	scanf("%d", &keyWord);
	
	keyRes = linearSearch(a, keyWord);
	
	printf("%s\t%d\t%s", "questo numero: ", keyRes, "è presente");


	return 0;
}
size_t linearSearch (const unsigned int vet[], size_t key )

{
	for(size_t n = 0; n < SIZE; n++ )
	{
		if (key == vet[n])
		
		return key;
	}

	puts("numero non trovato");
	exit(0);
}