#include<stdio.h>
int main()
{
    int  count,t,n;
    int bigmod;

    while(scanf("%d",&n)==1)
    {
        t=10;
        count=1;
        bigmod=1;
        while(bigmod%n!=0)
        {
            bigmod=(bigmod*t+1)%n;
            count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
