//Write a C program to read the age of a candidate and determine whether it is eligible
//    for casting his/her own vote.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%i",&n);
    if(n>=18)
    {
        printf("voter");
    }
    else
    {
        printf("not voter");
    }
    return 0;
}

