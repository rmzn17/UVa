#include<stdio.h>

long long int  factorial(long long int  n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);

}

long long int  combination(long long int  n,long long int  m)
{

    return (factorial(n)/(factorial(n-m)*factorial(m)));


}

long long int  Dearrengment(long long int  n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    return (n-1)*(Dearrengment(n-1)+Dearrengment(n-2));


}


int main()
{
    long long int  m,n,i,j,ways;

    while(scanf("%lld%lld",&n,&m)==2)
    {

        ways=0;
        ways+=Dearrengment(n);
        for(i=1; i<=m; i++)
        {
            ways+=combination(n,i)*Dearrengment(n-i);
        }
        printf("%lld\n",ways);
    }
    return 0;
}
