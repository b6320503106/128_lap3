#include<stdio.h>
int main()
{
   long int n;
   int i=3,max;
   scanf("%ld",&n);
   for(i=1;i<n;i++)
   {
        if(n%2==1)
        max=n;
        else if(n%i==1)
          max=i;
   }
    printf("%d",max);
    return 0;
}
