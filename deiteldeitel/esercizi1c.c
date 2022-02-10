//cosa viene stampato se vengono eseguite tali istruzioni.
#include <stdio.h>
int main(int argc, const char * argv[]) {

	int x = 2;
	int y = 3;
		
		printf("%d", x);
		printf("\n");
		printf("%d", x+x);
		printf("\n");
		printf("x=" );
		printf("\n");
		printf("x=%d", x);
		printf("\n");
		printf("%d = %d", x + y, y + x);
		printf("\n");
		int z;
		z = x + y;
		scanf("%d%d", &x, &y);
		printf("\n");
		//printf("x + y = %d", x + y);
		printf("\n");
		
		return 0; }