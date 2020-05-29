// input 2 numbers and clasify them with < or > 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

int a = atoi(argv[1]);
int b = atoi(argv[2]);
	
	if (a<b) 
	{
	printf("%d < %d\n", a, b);
	}
		else if (a>b)
		{
		printf("%d > %d\n", a, b);
		}
			else if (a = b)
			{
			printf("%d = %d", a, b);
			} 
return 0;
}
