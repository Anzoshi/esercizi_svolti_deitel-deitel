/*
Scrivere un programma che calcoli l'indice di massa corporea (BMI)di un utente e stampi se l'utente in questione è sottopeso, normale, sovrappeso oppure obeso.
*/
#include <stdio.h>
int main (int argc, const char * argv[]) {

	double BMI;
	double kg;
	double h;
	BMI = 0;
		puts( "questo programma legge il vostro peso e altezza e vi restituisce se siete sottopeso, normali, sovrappeso oppure obeso secondo gli standard della " 			"National Istitution of Health" );
		
		puts ( "inserire il peso: " );
			scanf ( "%lf",  &kg );
		
		puts ( "Inserire l'altezza" );
		scanf ( "%lf", &h );
		
		BMI = kg / ( h * h );
		
		puts("valore del BMI:");
		
		if ( BMI < 18.5 ) {
				printf ( "%s%lf\n", "il tuo indice di massa corporea è: ", BMI );
				puts ( "sei sottopeso, mangia di più" );
					
			} else if ( 18.5 <= BMI <= 24.9 ) {
				printf ( "%s%lf\n", "il tuo indice di massa corporea è: ", BMI);
				puts ( "sei normale, continua così" );
				
			} else if ( 25 <= BMI <= 29.9) {
				printf ( "%s%lf\n", "il tuo indice di massa corporea è: ", BMI );
				puts ("sei sovrappeso, mangia di meno");
			
			} else if ( BMI >= 30 ) {
				printf ( "%s%lf\n", "il tuo indice di massa corporea è: ", BMI );
				printf ( "%s", "sei obeso, chiama il 118" );
					}
			
			return 0; }
			
			
		
	
		
		
		