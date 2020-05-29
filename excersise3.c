// input one number and know if it has an entire half
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
int a = atoi(argv[1]);

if (a%2!= 0)
{
printf(" It doesn't have an integer half\n");
}
else{ printf("it has an integer half"); }
return 0;
}
