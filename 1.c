// Write a C program that prints the perimeter of a rectangle to take its height and width as input
#include<stdio.h>
int main()
{
    int height,width;
    printf("enter a number");
    scanf("%i%i",&height,&width);
    printf(" parameter is %i",2*(height+width));
    return 0;
}