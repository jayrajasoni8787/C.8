//Write a C program to accept the height of a person in centimeter and categorize the person
//   according to their height if below 150 he is dwarf if above 150 and below 200 average and 
//   above 200 tall.
#include<stdio.h>
int main()
{
    int hight;
    printf("enetr a number");
    scanf("%i",&hight);
    if(hight<150)
    {
        printf("draft");
    }
    else if(hight>150 && hight<200)
    {
        printf("average");
    }
    else if(hight>200)
    {
        printf("tall");
    }
    return 0;
}