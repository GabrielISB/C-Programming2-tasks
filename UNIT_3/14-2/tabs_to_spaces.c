#include <stdio.h>
#include <stdlib.h>

const char written_file[] = "fileone.txt";
const char copied_file[] = "filetwo.txt";

int main()
{


 FILE *writtenfile;   //Pointer to the first file
 FILE *copiedfile;	//Pointer to hte second file

int character;



writtenfile = fopen(written_file, "r");  //Opening  the first file for reading
	
	if(writtenfile == NULL)		//Check if there's a file
	{
	printf("Error opening the file for reading\n");
	return(8);
	}



copiedfile = fopen(copied_file, "w+"); //Opening the file for reading and overwriting
	
	if(copiedfile == NULL) 		//Check if there's a file
	{
	printf("Error opening the file for writing\n");
	return(8);
	}




	while(1)
	{
	character = fgetc(writtenfile); //Looking for a char

	if(character == EOF)  //Detect the end of the file and ends the program up
		{
		break;
		}

	if(character == '\t')			//If it finds a tab on the first document
		{
		fputc(' ', copiedfile);		//It copies it as two spaces on the second document
		fputc(' ', copiedfile);
		}
		else
		{
		fputc(character, copiedfile);      //If what the program finds isn't a tab, then it copies it as the original char
		}
	}

fclose(writtenfile);     			//Then we close both documents
fclose(copiedfile);

return 0;

}


