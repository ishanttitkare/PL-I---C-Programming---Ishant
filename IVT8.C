/*
Program (8) Write a C program to swap two numbers using a temparary varibale
Solution (2) User Define Values
*/
#include <stdio.h>
int main()
{
    int a,b,temp;

    printf("\n Enter First Number: ");
    scanf("%d",&a);

    printf("\n Enter Second Number: ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b= temp;

    printf("\n After swapping: \n");
    printf("\n First Number= %d \n",a);
    printf("\n Second Number= %d \n",b);

    return 0;
}