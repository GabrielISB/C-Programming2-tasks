#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//First I created a structure of the Liguilla MX

struct LiguillaMX {
char *team1;
char *team2;
char *team3;
char *team4;
char *team5;
char *team6;
char *team7;
};

//This is to alocate every team in a memory space
struct LiguillaMX *liguillacreate(char *team1, char *team2, char *team3, char *team4, char *team5, char *team6, char *team7)
{
	struct LiguillaMX *teamsmemory = malloc(sizeof(struct LiguillaMX)); //Here is where the dynamic memory is allocated, on the spcae of size of the structure
	assert(teamsmemory != NULL);

	teamsmemory->team1 = strdup(team1);
	teamsmemory->team2 = strdup(team2);
	teamsmemory->team3 = strdup(team3);
	teamsmemory->team4 = strdup(team4);
	teamsmemory->team5 = strdup(team5);
	teamsmemory->team6 = strdup(team6);
	teamsmemory->team7 = strdup(team7);

	return teamsmemory;

}

//This other function is to liberate the space on the main function.

void liguilladestroy(struct LiguillaMX *teamsmemory)
{
	assert(teamsmemory != NULL);
	
	free(teamsmemory->team1);
	free(teamsmemory->team2);
	free(teamsmemory->team3);
	free(teamsmemory->team4);
	free(teamsmemory->team5);
	free(teamsmemory->team6);
	free(teamsmemory->team7);
}

void printliguilla(struct LiguillaMX *teamsmemory)
{
printf("Team: %s\n", teamsmemory -> team1);
printf("Team: %s\n", teamsmemory -> team2);
printf("Team: %s\n", teamsmemory -> team3);
printf("Team: %s\n", teamsmemory -> team4);
printf("Team: %s\n", teamsmemory -> team5);
printf("Team: %s\n", teamsmemory -> team6);
printf("Team: %s\n", teamsmemory -> team7);
}

//HEre is the main function

int main()
{

struct LiguillaMX *liguilla2020 = liguillacreate("Pumas", "Chivas", "America", "Rayados", "Xolos", "Tigres", "Mazatlan");

printf("The liguilla is \n");

printliguilla(liguilla2020);

liguilladestroy(liguilla2020);


return 0;
}


