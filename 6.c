//Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a number");
    scanf("%i%i",&n,&p);
    if(n==p)
    {
        printf("equal ");
    }
    else
    {
        printf("not equal");
    }
    return 0;

}

