#include <stdio.h>
int main ()
{
   int k,n=2;
   scanf("%d",&k);
    while(k!=1)
    {
        while(k%n==0)
        {
            printf("%d\n",n);
            k=k/n;
        }
       n++;
    }
printf("0\n");
 return 0 ;
}
