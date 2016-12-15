#include<stdio.h>

int prime(long long int n)
{
    int i,j;
    if(n==1)
        return 0;

    if(n==2)
        return 1;

    if(n%2==0)
        return 0;

    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}

int main()
{
    long long int n,i,x,y,z,result,input,key,key1;
    while(scanf("%lld",&n)==1)
    {
        result=0;
        key=0;
        key1=0;

        if(prime(n))
            key=1;

        if(key==1)
        {
            input=n;
            while (input!=0)
            {
                result = result*10 + input%10;
                input /= 10;
            }

            if(prime(result))
                key1=1;

        }

        if(key1==1&&result!=n)
            printf("%lld is emirp.\n",n);
        else if(key==1)
            printf("%lld is prime.\n",n);

        else
            printf("%lld is not prime.\n",n);
    }

    return 0;
}
