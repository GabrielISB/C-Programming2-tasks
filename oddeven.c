#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
//first we ask for the number (argument) and then we test it

	int a = atoi(argv[1]);
	int test = a % 2;
		if (test == 0)
		{
		printf("%d is an even integer\n", a);
    		}
			else
        		{
			printf("%d is an odd integer\n", a);
			}
// we used if else in order to get the correct output
return 0;
}
