//accept marks of 4 subjects and calculate percentage if percentage is below 35% - F
//   below 45% - D below 55% - C below 75% - B above 75% - A 
#include<stdio.h>
int main()
{
    int h,e,m,p,per;
    printf("enter a number ");
    scanf("%i%i%i%i",&h,&e,&m,&p);
    per=(h+e+m+p)/4;
    if(per<35)
    {
        printf("f");
    }
    else if(per<45 && per>35)
    {
        printf("d");
    }
    else if(per<55 && per>45)
    {
        printf("c");
    }
    else if(per<75 && per>55)
    {
        printf("b");
    }
    else if(per>75)
    {
        printf("a");
    }
    return 0;
}

