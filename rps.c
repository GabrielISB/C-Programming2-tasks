#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

//On this program I needed to use one more library in order to introduce a random digit

//These are the variables
srand(time(NULL));
int a;
int b = rand()%3+1;

//THe  sthetical output of the game

printf("This is the rock, paper, sissors GAME against the CPU\n");
printf("In order to play you must input a digit and you'll know CPU choice after the game is over\n");
printf("1 = rock\n 2 = paper\n 3 = sissors\n");
scanf(" %d", &a);

//And this is the part where we test the game in we give the result therefore the winner


	if(a==1 && b==3 || a==2 && b==1 || a==3 && b==2)
	{
		printf("YOU WIN\n");
	}
	else if(a==1 && b==2 || a==2 && b==3 || a==3 && b==1)
	{
		printf("The computer WINS\n");
	}
	else if(a==1 && b==1 || a==2 && b==2 || a==3 && b==3)
	{
		printf("TIE\n");
	}

//The cpu chice
printf("The CPU choice was %d\n", b);

return 0;
}
