/* 
Program (1) Write a program to make use of basic Input/Output functions using different data types
Solution (1) Predefined Values
*/

#include <stdio.h>
int main()
{ 
    int rollnum;
    float per;
    char grade;

    rollnum = 11;
    per = 75.5;
    grade = 'A';

    printf("-----Student Information-----\n");
    printf("\nRoll Number: %d", rollnum);
    printf("\nPercentage: %f", per);
    printf("\nGrade: %c", grade);

    return 0;
}
