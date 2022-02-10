/*
Scrivere un programma che legga il raggio di un cerchio e stampi il diametro, la circonferenza e l'area del cerchio, usare il valore costante 3,14159 per il PiGreco.
*/
#include <stdio.h>

void scan(int raggio);
void diametro (int raggio);
float circonferenza (int raggio, float PiGi);
float area (int raggio, float PiGi );

int main(int argc, const char * argv[]) {

	int r;
	float pigi;
	pigi = 3,14159;
	
			scan(r);
			diametro(r);
			circonferenza(r,pigi);
			area(r,pigi);
			
			
			return 0; }
	void scan(int raggio) {
	
		printf("%s","Inserisci il raggio del cerchio: ");
		scanf("%d", &raggio);
		
		return; }
	
	void diametro (int raggio) {
		
	int Diametro;
		
		printf("%s\n","il diametro è: ");
		Diametro = 2 * raggio;
		printf("%d\n",Diametro);
		
		return; }
		
	float circonferenza (int raggio, float PiGi) {
	
		float Circonferenza;
		PiGi = 3,14159;
		
			printf("%s\n","La circonferenza è: ");
			Circonferenza = 2 * PiGi * raggio;
			printf("%f\n", Circonferenza);
			
			return Circonferenza; }
			
			float area (int raggio, float PiGi) {
			
			float Area;
			PiGi = 3,14159;
			
				printf("%s\n","L'area è: ");
				Area = PiGi * (raggio * raggio);
				printf("%f",Area);
				
				return Area; }
				
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		