#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// The structure of the planes

struct planes {

	char *plane1;
	char *plane2;
	char *plane3;
	char *plane4; 
	};

//Function with pointers to store memory

struct planes *planes_create(char *plane1, char *plane2, char *plane3, char *plane4)
{
	struct planes *planes = malloc(sizeof(struct planes));
	assert(planes != NULL);

	planes->plane1 = strdup(plane1);
	planes->plane2 = strdup(plane2);
	planes->plane3 = strdup(plane3);
	planes->plane4 = strdup(plane4);

	return planes;
}

//Function to destroy the memory

void planes_destroy(struct planes *planes)
{
	assert(planes != NULL);
	free(planes->plane1);
	free(planes->plane2);
	free(planes->plane3);
	free(planes->plane4);
}

//function tu print the planes

void planes_print(struct planes *planes)
{

printf("The first flight is %s\n , the second flight is %s\n , the third flight is %s\n , the fourth flight is %s\n", planes->plane1, planes->plane2, planes->plane3, planes->plane4);

}

/*main function where the user will choose between 1 or 2 with arguments
and depends on which number you chose on your argument you will see the planes of the 1st or 2nd airport */

int main (int argc, char** argv)
{

int airport = atoi(argv[1]);

struct planes *airport1 = planes_create("Aeromexico", "Emirates", "CanadaFlight", "Iata");
struct planes *airport2 = planes_create("Iberia", "Aeromexico", "Stafeta", "MasAir");

if(airport==1)
{
planes_print(airport1);
}
else if(airport==2)
{
planes_print(airport2);
}

planes_destroy(airport1);
planes_destroy(airport2);

return 0;

}
