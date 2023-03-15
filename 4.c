//Write a program that converts Centigrade to Fahrenheit.
#include<stdio.h>
int main()
{
   int n;
   printf("enter a number");
   scanf("%i",&n);
   float p=(n*1.8)+32;
   printf("pahrenheit is %f",p);
   return 0;
}