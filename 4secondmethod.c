//Write a program that converts Centigrade to Fahrenheit.
#include<stdio.h>
int main()
{
    int n;
    printf("enter  a number");
    scanf("%i",&n);
    int p=(n*9/5)+32;
    printf("fahrenheit is %i ",p);
    return 0;
}