#include <stdio.h>
#include <stdlib.h>

// This program executes de multiplication tables

int main(int argc, char** argv)
{
int a = atoi(argv[1]);
int i = 1;
int b;
	for(i = 0; i <= 10; i++)
	{
	int b = a*i;
	
	printf("%d x  %d = %d\n", a, i, b);
	}

return 0;
}
