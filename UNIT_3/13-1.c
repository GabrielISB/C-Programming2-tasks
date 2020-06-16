#include <stdio.h>

#define ARRAY 7  //First define the array

int numbers[ARRAY] = { 10, 5, 4, 0, 1, -9, -3 }; //Then write the numbers of the array

int i; //counter

int *numbers_ptr;  //pointer to the array

int main()
{
	for(i = 0; i < ARRAY; ++i)  //Let's see the numbers of the array
	{
	printf("numbers[%d] = %d\n", i, numbers[i]);
	}

numbers_ptr = &numbers[0]; //Here we aim the pointer to the array 

	for(i = 0; i < ARRAY; ++i) //Here we begin to set every number to 0
	{
	*numbers_ptr = 0;
	++numbers_ptr;
	}

//At the end we want to see the new result of the array
printf("\n");

	for(i = 0; i < ARRAY; ++i)
	{
	printf("numbers[%d] = %d\n", i, numbers[i]);
	}

return 0;
}
