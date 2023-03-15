//Write a C program to check whether a given number is even or odd.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%i",&n);
    if(n%2==0)
    {
        printf("even number hai");
    }
    else
    {
        printf("odd number hai");
    }
    return 0;
}
