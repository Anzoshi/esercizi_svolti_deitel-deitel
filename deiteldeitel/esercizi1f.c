/*
Scrivere un programma che stampi sulla sterssa riga i numeri da 1 a 4.
a) non usare specificatori di formato.
b) usare specificatori di formato
c) uso di quattro istruzioni printf
*/
#include <stdio.h>
int main(int argc, const char * argv[]) {
	
		puts("a:");
		printf("1, 2, 3, 4\n");
		
		puts("b:");
		printf("%s, %s, %s, %s\n","1","2","3","4");
		
		puts("c:");
		printf("%s", "1, ");
		printf("%s","2, ");
		printf("%s","3, ");
		printf("%s","4");
		
		return 0; }
		