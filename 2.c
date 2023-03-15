//Write a C program that takes hours and minutes as input, and calculates the total number 
//  of minutes.
//  Expected Output :
//  Input hours: 5
//  Input minutes: 37
//  Total: 337 minutes.
#include<stdio.h>
int main()
{
    int hour,min;
    printf("enter a number");
    scanf("%i%i",&hour,&min);
    printf("total min is %i",hour*60+min);
    return 0;
}
