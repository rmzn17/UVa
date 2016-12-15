#include<stdio.h>

int main()
{
    int n,cs=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        printf("Case %d: %d\n",cs,n/2);
        cs++;
    }
    return 0;
}

