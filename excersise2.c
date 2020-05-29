/*This is a program which reads two numbers and if the numbers are the same they got  multiplied
if the first number is lesser than the second, they add up
and if the first is greater than the second, the second is substracted from the first*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = a + b;
int d = a - b;
int e = a * b;
	 if (a < b)
		{
		printf("%d\n", c);
		}
			 else if (a > b)
			{
			printf("%d\n", d);
			}
				else (a = b);
				{
				printf("%d", e);
				}

return 0;
}
