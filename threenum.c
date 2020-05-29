#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
//first we need the three numbers

        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        int num3 = atoi(argv[3]);

//THen we start to comparate each number with < and >

        if (num1<num2 && num1<num3)
                {
                printf("The smallest is %d\n", num1);
                }
                else if (num1>num3 && num1>num2)
                        {
                        printf("The greatest is %d\n", num1);
                        }
        if (num2<num1 && num2<num3)
                {
                printf("The smallest is %d\n", num2);
                }
                else if (num2>num1 && num2>num3)
                        {
                        printf("The greatest is %d\n", num2);
                        }
        if (num3<num1 && num3<num2)
                {
                printf("The smallest is %d\n", num3);
                }
                else if (num3>num1 && num3>num2)
                        {
                        printf("The greatest is %d\n", num3);
                        }
return 0;
}
