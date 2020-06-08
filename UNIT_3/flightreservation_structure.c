#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//First I did the structure of the reservation

struct reservation {

	int flightnum;
	int origincode;
	int destinationcode;
	int takeoffhour;
	int takeoffminute;
	int arrivalhour;
	int arrivalminute;
	};

//Then the function for the pointers

struct reservation *reservation_create(int flightnum, int origincode, int destinationcode, int takeoffhour, int takeoffminute, int arrivalhour, int arrivalminute)
{
	struct reservation *reserv = malloc(sizeof(struct reservation));
	assert(reserv != NULL); 

	reserv->flightnum = flightnum;
	reserv->origincode = origincode;
	reserv->destinationcode = destinationcode;
	reserv->takeoffhour = takeoffhour;
	reserv->takeoffminute = takeoffminute;
	reserv->arrivalhour = arrivalhour;
	reserv->arrivalminute = arrivalminute;
	
	return reserv;
}

//The delete memory function

void reserv_destroy(struct reservation *reserv)
{
	assert(reserv != NULL);
	free(reserv);
}

//Print the data function

void reserv_print(struct reservation *reserv)
{
	printf("The flight's number is: %d\n", reserv->flightnum);
	printf("The origin code is: %d\n", reserv->origincode);
	printf("The destination code is: %d\n", reserv->destinationcode);
	printf("The take off hour is at %d : %d\n", reserv->takeoffhour, reserv->takeoffminute);
	printf("The arrival hour is at %d : %d\n", reserv->arrivalhour, reserv->arrivalminute);

}

//The main function where the arguments receive all the data to store in the structure

int main(int argc, char** argv)
{

struct reservation *reservation1 = reservation_create(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));

reserv_print(reservation1);
reserv_destroy(reservation1);

return 0;

}
