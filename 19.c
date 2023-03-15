// Accept an integer and Print hello world n times
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%i",&n);
    for(int i=0;i<n;i--)
    {
        printf("hello world");
    }
    return 0;
}