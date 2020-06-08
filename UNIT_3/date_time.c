#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct DateTime {
	int day;
	int month;
	int year;
	int hour; 
	int minutes;
	};

struct DateTime *Datetime_create(int day, int month, int year, int hour, int minutes)
{
	struct DateTime *info = malloc(sizeof(struct DateTime));
	assert(info != NULL);

	info->day = day;
	info->month = month;
	info->year = year;
	info->hour = hour;
	info->minutes = minutes;

return info;
}

void datetime_destroy(struct DateTime *info)
{
	assert(info != NULL);
	free(info);
}

void datetime_print(struct DateTime *info)
{

printf("Date: %d / %d / %d\n", info->day, info->month, info->year);
printf("Time: %d : %d\n", info->hour, info->minutes);

}

int main(int argc, char** argv)
{

int a;
int b;

 struct DateTime *user1 = Datetime_create(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]));

 struct DateTime *user2 = Datetime_create(atoi(argv[6]), atoi(argv[7]), atoi(argv[8]), atoi(argv[9]), atoi(argv[10]));

 datetime_print(user1);
 datetime_print(user2);

datetime_destroy(user1);
datetime_destroy(user2);

return 0;
}


