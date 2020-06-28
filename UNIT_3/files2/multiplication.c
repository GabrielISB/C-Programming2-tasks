#include <stdio.h>
#include <stdlib.h>

const char mult_in [] = "mult1.txt";
const char mult_out[] = "mult2.txt";

int main() 
{

FILE *numberslist;
FILE *result;

char line [200];
int num;
int num2;
int multiplication;


numberslist = fopen(mult_in, "r");
	if(numberslist == NULL)
	{
	printf("Impossible\n");
	return 8;
	}

result = fopen(mult_out, "w+");
	if(result == NULL)
	{
	printf("Not possible\n");
	return 8;
	}


while(feof(numberslist)==0)
{

fscanf(numberslist, "%d %d", &num, &num2);

multiplication = num*num2;

fprintf(result, "%d\n", multiplication);

}



fclose(numberslist);
fclose(result);

return 0;
}
