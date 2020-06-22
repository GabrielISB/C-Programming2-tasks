#include <stdio.h>
#include <stdlib.h>

int main()
{

								//declaration of counter, digits num and pointer
int i;

int sum = 0;

int digitsnum;

int *ptr;

							//memory allocation
ptr = malloc(digitsnum * sizeof(int));

							//check if NULL
	if(ptr == NULL)
	{
	printf("ERROR\n");
	}

	printf("how many numbers will you sum?\n"); //We ask for the value of the variable digit num
	scanf("%d", &digitsnum);

	//On this for loop we ask for all the numbers and the we add them with sum+=
	for(i = 0; i < digitsnum; i++)
	{
	printf("Number #%d \t", i+1);
	scanf("%d", ptr+i);

	sum+= *(ptr+i);  //   *() was written so we can sum the integer and the integer on the pointer
	}

	printf("The sum is : %d\n", sum); //Then I print the sum

free(ptr);   //ANd liberate the memory
	



return 0;
}
