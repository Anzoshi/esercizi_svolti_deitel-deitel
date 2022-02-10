/*
Scrivere un programma che riceva in ingresso tre diversi interi dalla tastiera, poi stampi la somma, la media, il prodotto, il mionore e il maggiore di questi numeri.
*/
#include <stdio.h>
int sum(int x, int y, int z);
int avarage (int x, int y, int z);
int product (int x, int y, int z);
int main (int argc, const char * argv[]) {

	int A;
	int B;
	int C;
	int D;
			printf("Enter three different integers: ");
			scanf("%d%d%d", &A, &B, &C);
			
			D = sum(A,B,C);
			printf("%s%d","Sum is: ", D);
			
			printf("\n");
			
			D = avarage(A,B,C);
			printf("%s%d","Avarage is: ", D);
			
			printf("\n");
			
			D = product(A,B,C);
			printf("%s%d","Product is: ", D);
			
			printf("\n");
			
			if(A<B && B<C) {
			printf("%s%d","Smallest is: ", A);
			
			printf("\n");
			
			}else if(B<A && A<C) {
			printf("%s%d","Smallest is: ", B);
			
			printf("\n");
			
			}else if(C<A && A<B) {
			printf("%s%d","Smallest is: ", C);
			
			printf("\n");	
			}											
			
			if(A>B && B>C) {
			printf("%s%d","Largest is: ", A);
			
			printf("\n");
			
			}else if(B>A && A>C) {
			printf("%s%d","Largest is: ", B);
			
			printf("\n");
			
			}else if(C>A && A>B) 
			printf("%s%d","Largest is: ", C);							
			
			return 0; }
		
		int sum(int x, int y, int z) {
		int v;
			v = x + y + z;
			
			return v; }
		
		int avarage(int x, int y, int z) {
		int v;
			v = (x * y * z) /  3;
			
			return v; }
		
		int product(int x, int y, int z) {
			int v;
				v = x * y * z;
				
				return v; }
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
			
		
		
		
		
		
		
		
		
		
		
		