/*
Scrivere un programma che richieda all'utente di inserire due interi, che legga tali numeri e quindi stampi il numero maggiore seguito dalla stringa "is larger". Se i numeri sono uguali, stampa il messaggio "These numbers are equal". usare solamente la forma a selezione singola dell istruzione if .
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {

	int A;
	int B;
	
			puts("inserisci due numeri");
			scanf("%d%d", &A,&B);
			if(A>B)
			printf("%d%s",A," is larger");
			else if (A<B)
			printf("%s","error.exe ha smesso di rispondere");
			else if (A==B)
			printf("%d, %d%s",A,B," these numbers are equals");
			
			return 0; }
	

			
        	
        	