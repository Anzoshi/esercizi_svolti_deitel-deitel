/*
Scrivere un programma che chieda all'utente di inserire due numeri , che li legga e ne stampi  la somma, il prodotto, la differenza, il quoziente e il resto.
*/
int somma(int x, int y);
int prodotto(int x,int y);
int differenza(int x,int y);
int quoziente(int x, int y);
int resto(int x, int y);
#include <stdio.h>
int main(int argc, const char * argv[]) {
	int A;
	int B;
	int ris;
		printf("%s\n","inserisci due numeri: ");
		scanf("%d%d",&A,&B);
		
		ris = somma(A,B);
		puts("la somma è:");
		printf("%d\n", ris);
		
		ris = prodotto(A,B);
		puts("il prodotto è:");
		printf("%d\n", ris);
		
		ris = differenza(A,B);
		puts("la differenza è:");
		printf("%d\n", ris);
		
		ris = quoziente(A,B);
		puts("il quoziente è:");
		printf("%d\n", ris);
		
		ris = resto(A,B);
		puts("il resto è:");
		printf("%d", ris);
		
		return 0; }
	
	int somma(int x, int y) {
	int z;
	z = x + y;
	
	return z; }
	
	int prodotto(int x, int y) {
	int z;
	z = x * y;
	
	return z; }
	
	int differenza(int x, int y) {
	int z;
	z = x - y;
	
	return z; }
	
	int quoziente(int x, int y) {
	int z;
	z = x / y;
	
	return z; }
	
	int resto(int x, int y) {
	int z;
	z = x % y;
	
	return z; }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	