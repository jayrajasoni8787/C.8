//Sum up to n terms.
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
   printf("enter  an number");
   scanf("%i",&n);
   for(int i=1;i<=n;i++)
   {
    sum=sum+i;
   }
   printf("%i",sum);
   return 0;
}
