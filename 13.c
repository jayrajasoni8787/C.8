//Write a C program to find the largest of three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%i%i%i",&a,&b,&c);
   if(a>b && a>c)
   {
    int p=a;
    printf("larger number is %i ",p);
   }
   else if(b>a && b>c)
   {
    int q=b;
    printf("larger number is %i",q);
   }
   else if(c>a && c>b)
   {
    int r=c;
    printf("larger number is %i",r);
   }
    return 0;
}