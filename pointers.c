#include <stdio.h>
#include <stdlib.h>

void main(int *a,int *b)
{
    
    *a=*a+*b;
    *b=abs(*a-(2**b));
}
