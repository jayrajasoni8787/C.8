// Write a C program that converts kilometers per hour to miles per hour.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%i",&n);
    float p=n*0.621;
    printf("miles is %f",p);
    return 0;

}