#include <stdio.h>
#include <stdlib.h>
const char input [] = "fizzb1.txt";
const char output [] = "fizzb2.txt";

//Here we enter the txt files

int main()
{

			//Here we open the ptr and the chars and the integer
FILE *fb_input;
FILE *fb_output;
char line [100];
int num;

				//Here we open the file that reads the numbers

fb_input = fopen(input, "r");

	if(fb_input == NULL)
	{
	printf("No input file\n");
	return 8;
	}
					//Here we open the file where we gonna write
fb_output = fopen(output, "w+");

	if(fb_output == NULL)
	{
	printf("No output file\n");
	return 8;
	}

							//The while will read all the lines
	while(fgets(line, sizeof(line), fb_input))
	{
		
		sscanf(line, "%d", &num);		//With sscanf we put the line into the integer

		if(num == EOF)
			{
			break;
			}

		if(num % 3 == 0 && num % 5 == 0)		//This is the fizz buzz program
		{
		fprintf(fb_output, "\nFIZZBUZZ\n");
		}
	
		
		if(num % 3 == 0)
		{
		fprintf(fb_output, "\nFIZZ\n");
		}

		if(num % 5 == 0)
		{
		fprintf(fb_output, "\nBUZZ\n");
		}	
		else
			{
			fprintf(fb_output, "\n%d\n", num);  //printf the number if it is different
			}

	}

fclose(fb_input);
fclose(fb_output);

return 0;
}
