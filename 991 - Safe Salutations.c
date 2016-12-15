#include<stdio.h>

long long int factorial(long long int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}


int main()
{
    long long int n,tc=0;
    while(scanf("%lld",&n)==1)
    {
        if(tc>0)
            printf("\n");

        printf("%lld\n",factorial(2*n)/(factorial(n+1)*factorial(n)));
        tc++;

    }
    return 0;
}


