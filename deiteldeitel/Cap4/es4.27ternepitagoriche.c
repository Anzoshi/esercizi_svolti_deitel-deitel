/*
scrivere un programma che calcoli tutte le possibili triple pitagoriche nei primi x numeri, usando la BRUTE FORCE.
(una tripla pitagorica sono quei tre valori che soddisfano la relazione in cui la somma dei due lati corrisponde al quadrato dell'ipotenusa).
*/
#include <stdio.h>
#include <math.h>

int main (int argc, const char * argv[])
{ 
	int side1;
	int side2;
	long long int totside;
	long long int hypo;
	unsigned int x;
		
		puts("inserisci un valore");
		scanf("%u", &x);
		
	unsigned int countside1;
			for(countside1 = 1; countside1 <= x; countside1++)
			{	
				side1 = countside1;
				
				unsigned int countside2;
				
				for(countside2 = 1; countside2 <= x; ++countside2 )
				{ 
					side2 = countside2;
					totside = side1 + side2;
					
					unsigned int counthypo;
					long long int powhypo;
						
					for(counthypo = 1; counthypo <= totside; counthypo += 1 )
					{
						hypo = counthypo;
						powhypo = counthypo;
					 	powhypo *= hypo;
					 	
					 	if(powhypo == totside)
					 		
					 		printf("\n%s%d, %d, %lld%s\n%s%lld%s%lld\n", "questi numeri sono: ", side1, side2, hypo, " una tripla pitagorica", "la somma dei due lati è: ", totside, " mentre l'ipotenusa con due all'esponente è: ", powhypo);
					 	
					 	else if(powhypo >= totside)
					 			continue;
					}
					
				}
			}	
	
		
	
	
	return 0;
}
