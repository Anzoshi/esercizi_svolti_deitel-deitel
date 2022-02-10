/*
Unicode...
*/
#include <stdio.h>
int main(int argc, const char * argv[]) {

	int x;
		puts("Scrivere un intero che verrà convertito nell'equivalente lettera in unicode");
		scanf("%d", &x);
		puts("");
		
		printf("%s%c", "Questo è l'equivalente in lettere: ", x);// se non ci sono output vuol dire che l'intero eseguito non corrisponde a nessuna lettera
		
		return 0; }		
	