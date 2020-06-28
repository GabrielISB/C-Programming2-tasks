#include <stdio.h>
#include <stdlib.h>
//tHis are the documents
const char average_in [] = "average1.txt";
const char average_out [] = "average2.txt";

int main()
{

FILE *averagenumbers;   //Open the pointers to the documents
FILE *averageoutput;
			//The variables of the lines, number in the lines and the average
char line [100];
float line_num;
float averageresult;

//Opening all the files
averagenumbers = fopen(average_in, "r");
	
	if(averagenumbers == NULL)
	{
	printf("Error\n");
	return 8;
	}

averageoutput = fopen(average_out, "w+");

	if(averageoutput == NULL)
	{
	printf("Impossible\n");
	return 8;
	}
//Here with this while the program reads and scanf 

while(fgets(line, sizeof(line), averagenumbers))
{

	sscanf(line, "%f", &line_num);
//On this line all the elements read are added
	averageresult += line_num;
			
}
//On the printf we divide the average / how many # there are
fprintf(averageoutput, "The prom is %f\n", averageresult/9);

//Finally we close the doc
fclose(averagenumbers);
fclose(averageoutput);

return 0;
}
