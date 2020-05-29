#include <stdio.h>
#include <stdlib.h>

//This program shows the addition of n number introduced from last to first.

int main(int argc, char** argv)
{
int a = atoi(argv[1]);
int b = 1;
int c = 0;

	for(b = 1; b<= a; b++)
	{
	  c = c + b;
	
	}
		{
		printf(" The sum is %d\n", c);
		}
return 0;
}
