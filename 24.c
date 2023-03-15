//Factorial of a number
#include<stdio.h>
int main()
{
    int n;
    int fact=1;
    printf("enter a number  ");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        
        fact=fact*i;
    }
    printf("%i",fact);
    return 0;
}