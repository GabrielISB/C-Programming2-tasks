#include <stdio.h>
#include <string.h>

char *findchar(char *string) //First define the function which finds a nonwhite char
{
	while((string[0] == ' ') || (string[0] == '\t')) //while the first char is white it will increase
	{
	++string;
	}
return string;
}

//On the main function we define the size of the string, wit the f gets and then evaluate with the findchar function. 
int main()
{

char line[50];

printf("Enter a string: ");
fgets(line, sizeof(line), stdin);

printf("Result: %s", findchar(line));

return 0;
}
