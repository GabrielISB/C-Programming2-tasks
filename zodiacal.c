
#include <stdio.h>
#include <stdlib.h>
int main()
{

int a;
int b;

//I did it with scanf becasue it is more stethic than args

	printf("Enter the day you were born \n");
	scanf(" %d", &a);

	printf("Enter the month of your birthday (in number) \n");
	scanf(" %d", &b);

//after I had the two numbers I just started to test

	if(a>=21 && b<=1 || a<19 && b==2)
	{
		printf("you are aquarius\n");
	}
	else if(a>=19 && b==2 || a<21 && b==3)
	{
		printf("you are pisces\n");
	}
	else if(a>=21  && b==3 || a<20 && b==4)
	{
		printf(" you are aries\n");
	}
	else if(a>=20 && b==4 || a<21 && b==5)
	{
		printf(" you are tauro\n");
	}
	else if(a>=21 && b==5 || a<21 && b==6)
	{
		printf(" you are gemini\n");
	}
	else if(a>=21 && b==6 || a<23 && b==7)
	{
		printf(" you are cancer\n");
	}
	else if(a>=23 && b==7 || a<23 && b==8)
	{
		printf(" you are leo\n");
	}
	else if(a>=23 && b==8 || a<23 && b==9)
	{
		printf("you are virgo\n");
	}
	else if(a>=23 && b==9 || a<23 && b==10)
	{
		printf("you are libra\n");
	}
	else if(a>=23 && b==10 || a<22 && b==11)
	{
		printf("you are scorpio\n");
	}
	else if(a>=22 && b==11 || a<22 && b==12)
	{
		printf(" you are sagitarius\n");
	}
	else if(a>=22 && b==12 || a<21 && b==1)
	{
		printf(" you are capricorn\n");
	}
return 0;
}
