#include <stdio.h>
#include <stdlib.h>

//This program executes a pyramid when you give it a number

int main(int argc, char** argv)
{
int i = 1;
int j = 1;
int a = atoi(argv[1]);

	for(i = 1; i <= a; i++)
		{
		for(j = 1; j <= i; j++)
		
		printf("°");
		printf("\n");

		}

return 0;
}
