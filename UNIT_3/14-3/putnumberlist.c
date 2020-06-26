#include <stdio.h>
#include <stdlib.h>

const char numberlist[] = "numbers.txt";
const char divisible[] = "divisibleby3.txt";
const char nondivisible[] = "nondivisbleby3.txt";

int main()
{

FILE *listfile;			//All the pointers to the files
FILE *divisible_ptr;
FILE *nondivisible_ptr;

char num;  //Needed to read the documents

listfile = fopen(numberlist, "r");		//Open the list file
	
	if(listfile == NULL)
	{
	printf("Not number list document\n");
	return(8);
	}


divisible_ptr = fopen(divisible, "w+"); 		//Writing numbers divisbles by 3 on the second document
	
	if(divisible_ptr == NULL)
	{
	printf("No document for writing numbers divisibles by 3\n");
	return(8);
	}

nondivisible_ptr = fopen(nondivisible, "w+");    	//Writing numbers non divisible by 3 on the third document

	if(nondivisible_ptr == NULL)
	{
	printf("No document for writing non divisble by 3\n"); 
	return(8);
	}


	while(1) 		//Reading the chars, and writing them as integers with type casting on the second and third document
	{
	num = fgetc(listfile);

	if(num == EOF)
		{
		break;
		}


	if(num % 3  == 0)
		{
		fputc((int)num, divisible_ptr);
		}	
	else 
		{
		fputc((int)num, nondivisible_ptr);
		}
	
	}			//closing the files

fclose(listfile);
fclose(divisible_ptr);
fclose(nondivisible_ptr);

return 0;
}



 
