#include<stdio.h>

long long int fac(long long int n)
{
    if(n==1)
        return 1;
    else
        return n*fac(n-1);
}


int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0&&n%2==0)
            printf("Underflow!\n");
        else if(n<0&&n%2!=0)
            printf("Overflow!\n");
        else if(n==0||n<=7)
            printf("Underflow!\n");

        else if(n>=8&&n<=13)
        {
            printf("%lld\n",fac(n));
        }
        else if(n>13)
            printf("Overflow!\n");
    }
    return 0;
}
