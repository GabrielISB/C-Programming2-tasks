#include <stdio.h>
#include <stdlib.h>

int main()
{
//First I declarated the char value
char a;
// I did it with scanf because it is more practical and stethic
	printf("This is a program which will read any char and tells you what it is\n");
	printf("Please enter the char\n");
	scanf("%c", &a);

/*after that I just started to test the character gotten with
digits, alphabetic and special, just like an logical operation*/

	if(a>='0' && a<='9')
	{
		printf("The character %c is a digit\n", a);
	}
	else if(a>='a' && a<='z' || a>='A' && a<='Z')
	{
		printf("The character %c is an alphabetic\n", a);
	}
		else
		{
			printf(" The character %c is a special character\n", a);
		}
return 0;
}
