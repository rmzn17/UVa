#include<stdio.h>
int main()
{
    long long  int m,n,c;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        printf("  %lld\n",(m*n)-1);
    }
    return 0;
}
