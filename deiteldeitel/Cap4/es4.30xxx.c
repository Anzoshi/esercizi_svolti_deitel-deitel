/*
scrivere un programma che sostituisca la struttura switch paragrafo 4.7 con un struttura a selezione singola if...else.
*/

#include <stdio.h>

int main (int argc, const char * argv[])
{
	unsigned int countA = 0;
	unsigned int countB = 0;
	unsigned int countC = 0;
	unsigned int countD = 0;
	unsigned int countF = 0;
	int grade;
	
	while ((grade = getchar())  != EOF) //risolverlo nell'altro modo dispendioso e noioso
	{	
		scanf("%d", &grade);
		if(grade != EOF)
		{
			if(grade == 'a' || grade == 'A')
				++countA;
			else if(grade == 'b' || grade == 'B')
				countB++;
			else if(grade == 'c' || grade == 'C')
				countC += 1;
			else if(grade == 'd' || grade == 'D')
				countD = countD + 1;
			else if(grade == 'f'|| grade == 'F')
				countF++;
		
		}
							
			
					
	}
	
	puts("total for each letter are: ");
	
	printf("%s%u\n", "A: ", countA);
	printf("%s%u\n", "B: ", countB);	
	printf("%s%u\n", "C: ", countC );
	printf("%s%u\n", "D: ", countD);
	printf("%s%u", "F: ", countF);
	
	
	return 0;
}