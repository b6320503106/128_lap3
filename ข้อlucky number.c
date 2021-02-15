#include<stdio.h>
int main()
{
    int n,a=0,m=2,t,c=0;
    scanf("%d",&n);
    t=n;
    while(t!=1)
    {
        if(t%m==0)
        {
            t/= m;
            if(a==m)
                break;
            a = m;
            c++;
        }
        else
            m++;
    }
    if(c==3)
        printf("%d is a Lucky Number.",n);
    else
        printf("%d is not a Lucky Number.",n);
    return 0;
}
