/*
scrivere un programma che esprima la veridicità delle leggi di De Morgan:
!(condizione1 && condizione2) == (!condizione1 || !condizione2);
!(condizione1 || condizione2) == (!condizione1 && !condizione2).

le espressioni sono le seguenti:

a- ! (x < 5) && ! (y >= 7);
b- ! (a == b) || ! (g != 5);
c- ! ((x <= 8) && (y > 4));
d- ! ((i > 4) || (j <= 6)).
*/
#include <stdio.h>
#include <stdbool.h>

int main (int argc, const char * argv[])
{
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int g = 0;
	int i = 0;
	int j = 0;
	bool v = true;
	bool f = false;
		
		puts("[! (x < 5) && ! (y >= 7))] = [! (( x < 5) || (y >= 7))]");
		
		if ((! (x < 5) && ! (y >= 7)) == ! (( x < 5) || (y >= 7)))
		{	
			puts("True");
			puts("legge di De Morgan è accurata");
		}	else
			{
				puts("false");
				puts("legge di De Morgan non è accurata");
			}
			
		puts("[! (a == b) || ! (g != 5)] == [( ! ((a == b) == (g != 5))]");
		
		if ((! (a == b) || ! (g != 5) == ( ! ((a == b) == (g != 5)))))
		{
			puts("True");
			puts("legge di De Morgan è accurata");
		}	else
			{
				puts("false");
				puts("legge di De Morgan non è accurata");
			}
			
		puts("[! ((x <= 8) && (y > 4))] == [! (x <= 8) || ! (y > 4)]");
		
		if ( (! ((x <= 8) && (y > 4))) == (! (x <= 8) || ! (y > 4)))
		{	puts("True");
			puts("legge di De Morgan è accurata");
		}	else
			{
				puts("false");
				puts("legge di De Morgan non è accurata");
			}
		puts("[! ((i > 4) || (j <= 6))] == [! (i > 4) && ! (j <= 6)]");
		
		if ( (! ((i > 4) || (j <= 6))) == (! (i > 4) && ! (j <= 6)))
		{	puts("True");
			puts("legge di De Morgan è accurata");
		}	else
			{
				puts("false");
				puts("legge di De Morgan non è accurata");		
			}
			
			
			
			
	
			
			
			
				
	return 0;
}
