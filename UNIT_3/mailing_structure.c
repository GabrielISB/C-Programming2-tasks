#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//First I make the strcuture of the email

struct  Mail {
	char *writername;
	char *writeremail;
	char *mailreason;
	int day;
	int month;
	int year; 
    };

/*After the structure I create a function of pointers 
with the structure in order to store data*/

struct Mail *Mail_create(char *writername, char *writeremail, char *mailreason, int day, int month, int year)
{

	struct Mail *mail_info = malloc(sizeof(struct Mail));
	assert(mail_info != NULL);

	mail_info->writername = strdup(writername);
	mail_info->writeremail = strdup(writeremail);
	mail_info->mailreason = strdup(mailreason);
	mail_info->day = day;
	mail_info->month = month;
	mail_info->year = year;

return mail_info;
}

//I create the destroy function to liberate memory

void Mail_destroy(struct Mail *mail_info)
{
	assert(mail_info != NULL);

	free(mail_info->writername);
	free(mail_info->writeremail);
	free(mail_info->mailreason);
	free(mail_info);

}

// I create the function to print the data of the structure

void Mail_print(struct Mail *mail_info)
{

	printf("Writer Name: %s\n", mail_info->writername);
	printf("Writer Email: %s\n", mail_info->writeremail);
	printf("Mail Reason: %s\n", mail_info->mailreason);
	printf("Date: %d / %d / %d\n", mail_info->day, mail_info->month, mail_info->year);
}
	

//This is the main function, where all the other functions are called and everything's done

int main(int argc, char** argv)
{

struct Mail *user = Mail_create(argv[1], argv[2], argv[3], atoi(argv[4]), atoi(argv[5]), atoi(argv[6]));

Mail_print(user);

Mail_destroy(user);

return 0;

}



