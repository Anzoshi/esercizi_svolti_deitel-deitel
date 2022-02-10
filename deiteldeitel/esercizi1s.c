/*
Scrivere un programma che calcoli i cubi e i quadrati dei valori da uno a dieci, e che usi le tabulazioni nello staparla.
*/
#include <stdio.h>
int main(int argc, const char * argv[]) {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f, g, h, i, l;
		
		puts("inserisci il primo valore:");
		
			scanf("%d", &a);
				puts("");
				printf("%s%10s%10s\n", "numero", "quadrato", "cubo");
					printf("%d", a);						
						printf("%10d", a * a);
							printf(" %10d ", a * a * a);
					
		
		puts("\ninserisci il secono valore:"); // copiare questa struttura nel resto del codice!!!
		
			scanf("%d", &b);
				puts("");
				printf("%d", b);
						printf("%3d", b * b);
							printf("%3d", b * b * b);
		
		puts("inserisci il terzo valore:");
			scanf("%d", &c);
				puts("");
				printf("%d", c);
						printf("%3d", c * c);
							printf("%3d", c * c * c);
				
		puts("inserisci il quarto valore:");
			scanf("%d", &d);
				puts("");
				printf("%d", d);
						printf("%3d", d * d);
							printf("%3d", d * d * d);
				
		puts("inserisci il quinto valore:");
			scanf("%d", &e);
				puts("");
				printf("%d", e);
						printf("%3d", e * e);
							printf("%3d", e * e * e);
				
		puts("inserisci il sesto valore:");
			scanf("%d", &f);
				puts("");
				printf("%d", f);
						printf("%3d", f * f);
							printf("%3d", f * f * f);
		
		puts("inserisci il settimo valore:");
			scanf("%d", &g);
				puts("");
				printf("%d", g);
						printf("%3d", g * g);
							printf("%3d", g * g * g);
						
		puts("inserisci l'ottavo valore:");
			scanf("%d", &h);
				puts("");
				printf("%d", h);
						printf("%3d", h * h);
							printf("%3d", h * h * h);
						
		puts("inserisci il nono valore:");
			scanf("%d", &i);
				puts("");
				printf("%d", i);
						printf("%3d", i * i);
							printf("%3d", i * i * i);
						
		puts("inserisci il decimo valore:");
			scanf("%d", &l);
				puts("");	
				printf("%d", l);
						printf("%3d", l * l);
							printf("%3d", l * l * l);
		
		return 0; }		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			