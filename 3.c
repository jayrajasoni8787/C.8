//Write a program in C that takes minutes as input, and display the total number of hours and
//  minutes.
//  Expected Output :
//  Input minutes: 546
//  9 Hours, 6 Minutes
#include<stdio.h>
int main()
{
    int min,hour;
    printf("enter a number");
    scanf("%i",&min);
    hour=min/60;
    printf("hour is %i\n",hour);
    min=min%60;
    printf("min is %i",min);
    return 0;
}
