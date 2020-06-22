#include <stdio.h>
#include <stdlib.h>

int main ()
{

int i; //Here I have my counter

int digitsnum; //This is the number of elements I'll work with scanf

float *chosennumber; //This is the pointer where we'll allocate the memory

	printf("This program will find the largest number with dynamic allocation\n");
	printf("Please introduce how many numbers this program will analyse\n");

	scanf("%d", &digitsnum); 
	
	chosennumber = malloc(digitsnum * sizeof(float));  //HEre  is where the pointer is set to point to the memory required for the variable number of digits "digitsnum"

		if(chosennumber == NULL) //Check if there's memory allocated on the pointer
		{
		printf("There are no memory spaces to be analysed, introduce again the number of digits that will be analysed\n");
		exit(0);
		}
		
		for(i = 0; i < digitsnum; i++)
		{
		printf("Choose the number %d\n", i+1);  //Here we  did a for loop to get the amount of numbers chosen and set them to their memories location
		scanf("%f", chosennumber+i);   // We can see that we set each number to the "chosennumber+i" variable to put all the numbers introduced
		}
	
			for(i = 1; i < digitsnum; i++)   //On this last loop we evaluate every memory location got on the step before
			{
			if(*chosennumber < *(chosennumber+i))   //If the pointer is lesser than the pointer + i then
				*chosennumber = *(chosennumber+i); //We can say that the pointer is equal to the pointer +i and the loops continues
			}

//the loop stops once it has evaluated all the digits from "digitsnum" and better said the memories locations.

printf("The greater is; %f \n", *chosennumber);  //Finally we print the greater number.

free(chosennumber);  //Then I liberate the memory.

return 0;
}
