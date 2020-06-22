#include <stdio.h>
#include <stdlib.h>

int main()
{
//here I define the variables and the pointer
int gradesnum;
int i;
float sum = 0;
float *ptr;

//Then I ask for the number of students

printf("How many student's grades´?\n");
scanf("%d", &gradesnum);

// i alocate the number

ptr = malloc(gradesnum * sizeof(float));

	if(ptr == NULL) //Here we check the memory
	{
	printf("ERROR\n");
	exit(1);
	}



	for(i = 0; i < gradesnum; i++);  //This for loop is to get the grades
	{
	printf("The grades of the %d student\n", i+1);
	scanf("%f", ptr+i);
	}

	for(i = 0; i<gradesnum; i++) //This for loop is the one which does the average
	{
	sum += *(ptr+i);
	}

printf("The mean of the grades is %.2f\n", sum);

return 0;
}
