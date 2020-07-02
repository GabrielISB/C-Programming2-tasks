//This program counts how many vowels there are in an article

#include <stdio.h>
#include <stdlib.h>

const char article_input [] = "article.txt";
const char article_output [] = "article2.txt";

int main()
{


 FILE *input;   //Pointer to the first file
 FILE *output;	//Pointer to the second file

char character;
int count;


input = fopen(article_input, "r");  //Opening  the first file for reading
	
	if(input == NULL)		//Check if there's a file
	{
	printf("Error opening the file for reading\n");
	return(8);
	}



output = fopen(article_output, "w+"); //Opening the second document
	
	if(output == NULL) 		//Check if there's a file
	{
	printf("Error opening the file for writing\n");
	return(8);
	}




	while(1)
	{
	character = fgetc(input); //Looking for a char

	if(character == EOF)  //Detect the end of the file and ends the program up
		{
		break;
		}
//Here the program counts and detects how many vowels there are on the first document
	if(character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' || character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U')
		{
		++count;
		}

      


	}

//Then we print the number of vowels 

	fprintf(output, "The number of vowels is %d\n", count);

fclose(input);     			//Then we close both documents
fclose(output);

return 0;

}

