#include<stdio.h>
int main()
{
    int p[5][4],c[5]={0,0,0,0,0},i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i]= c[i]+p[i][j];
        }
    }

    if(c[0]>c[1]&&c[0]>c[2]&&c[0]>c[3]&&c[0]>c[4])
        printf("1 %d",c[0]);
    else if(c[1]>c[0]&&c[1]>c[2]&&c[1]>c[3]&&c[1]>c[4])
         printf("2 %d",c[1]);
    else if(c[2]>c[0]&&c[2]>c[1]&&c[2]>c[2]&&c[2]>c[4])
         printf("3 %d",c[2]);
    else if(c[3]>c[0]&&c[3]>c[1]&&c[3]>c[2]&&c[3]>c[4])
         printf("4 %d",c[3]);
     else if(c[4]>c[0]&&c[4]>c[1]&&c[4]>c[2]&&c[4]>c[3])
         printf("5 %d",c[4]);

}
