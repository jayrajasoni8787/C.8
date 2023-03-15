//Accept two numbers from user and swap their values
#include<stdio.h>
int main()
{
    int a ,b;
    printf("enter two numbers ");
    scanf("%i%i",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("after swaping a=%i, b=%i",a,b);
    return 0;
}