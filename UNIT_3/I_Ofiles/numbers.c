//This a program that reads a file with numbers in two columns and prints in another document all the basic math operations

#include <stdio.h>
#include <stdlib.h>

const char operation_in [] = "numbers.txt";
const char operation_out [] = "numbers2.txt";
								//The files
int main() 
{
				//THe pointers
FILE *numberslist;
FILE *result;
				//These are the variabels for all the operationes done on the while
char line [200];
float num;
float num2;
float multiplication;
float sum;
float rest;
float division;
					//Open and checking if the input file has something
numberslist = fopen(operation_in, "r");
	if(numberslist == NULL)
	{
	printf("Impossible\n");
	return 8;
	}

result = fopen(operation_out, "w+");		//Opening and checking if the output file has something 
	if(result == NULL)
	{
	printf("Not possible\n");
	return 8;
	}


while(feof(numberslist)==0)
{
							//Here I scan both of the elements on the input file
fscanf(numberslist, "%f %f", &num, &num2);

multiplication = num*num2;			//Here I do the operations
sum = num + num2;
rest = num - num2;
division = num/num2;

//And the I print the results

fprintf(result, "\nNUMBERS:%f & %f\n Number mult %f\n Number sum %f\n Number rest %f\n Number division %f\n", num, num2 , multiplication, sum, rest, division);

//then I close the files

fclose(numberslist);
flcose(result);

continue;

}



fclose(numberslist);
fclose(result);

return 0;
}
