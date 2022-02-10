#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rando (void);

int main(void)
{
	printf("%d", rando());

	
return 0;
}
 int rando (void)
 
{
 	int n;
 	srand(time(NULL));
 	int x;
 	int y;
 	
 	puts("inserisci gli estremi da cui pescare:");
 	scanf("%d%d", &x, &y);
 	
 	n = rand() % y;
 	printf("%d\n", n);
 	
 	n += x;
 	printf("%d\n", n);
 	
 	  if (x < n && n <=  y) // bisogna mettere i return per far fuunzionare sta m***a.
 	 {
 	 	return n;
 	 }
 	else if (n > y)
 	{
 		n -= x;
 	}
 	else if (n < x);
 	
 	{
 		if (n < x / 2)
 		{
 			n = x;
 		}
 		else if (x == x / 2)
 		{	
 			n = (y -x) / 2;
 		}	
 		else if (n >=x / 2) // questo era il problema
 		{
 			n = y;
 		}
 	}
 	
 
	return n;
}