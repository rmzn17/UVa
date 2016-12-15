#include<stdio.h>

int main()
{
    unsigned long long  n;
    while(scanf("%llu",&n)==1)
    {
        if(n==0)
            break;
        long long temp=n*10/9;
        if(n%9==0)
            printf("%llu %llu\n",temp-1,temp);
        else
            printf("%llu\n",temp);
    }
    return 0;
}
