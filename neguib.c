//*Augusto: Hacer un programa que lea dos números, si son iguales multiplicarlos, si el primero es mayor que el segundo que se resten si el primero es menor que el segundo que se sumen*//
#include <stdio.h>
#include <stdlib.h>

int main () {

        int n,m,x,y,z;
        printf("Value for n: ");
        scanf("%d",&n);
        printf("Value for m: ");
        scanf("%d",&m);

if (n==m){
z = n*m;
printf("The result is: %d\n ",z);
} if (n>m) {
x = n-m;
printf("The result is: %d\n",x);
}
if (n<m){
y = n+m;
printf("The result is: %d\n ",y); }
return 0;
}
