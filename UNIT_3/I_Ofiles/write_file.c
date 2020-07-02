//This program ask for a word on the terminal and prints it on another document

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char text_write [] = "write_file.txt";
							//Here we open the txt
int main()
{

FILE *ptrfile;	//PTR file

char string[100]; 	//The string to the word we are gonna get




ptrfile = fopen(text_write, "w");	//-the pointer to the file
	
	if(ptrfile == NULL)
	{
	printf("ERROR\n");
	return 8;
	}

//Getting the word as a string on the terminal

	printf("Write one word\n");

	scanf("%s", string);

//Copying the world into the document

	fprintf(ptrfile, "%s\n", string);

fclose(ptrfile);

return 0;
}
