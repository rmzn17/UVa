#include<stdio.h>

int bigmod(long long int b,long long int p,long long int m)
{
    long long int result;
    if(p==0)
        return 1%m;
    if(p%2==0)
    {
        result=bigmod(b,p/2,m);
        result=(result*result)%m;
        return result;
    }
    else
    {
        return b*(bigmod(b,p-1,m))%m;
    }

}


int main()
{
    long long int b,p,m,mod,i,j;
    while(scanf("%lld",&b)==1)
    {
        scanf("%lld%lld",&p,&m);

        mod=bigmod(b,p,m);

        printf("%lld\n",mod);

    }
    return 0;
}
