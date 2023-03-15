//Reverse for loop. Print n to 1.
#include<stdio.h>
int main()
{
    int n;
    printf("entera number");
    scanf("%i",&n);
    for(int i=10;i>=n;i--)
    {
        printf(" %i",i);
    }
    return 0;
}