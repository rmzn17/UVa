#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i,c=0;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==0)
        return 1;
    return 0;
}

int main()
{
    int n;
    long long int cal;

    while(scanf("%d",&n)==1)
    {
        int prme=1;
        if(n==0)
            break;
        cal=(pow(2,n-1))*(pow(2,n)-1);
        prme=prime(n);
        if(prme==1&&n!=2 && n!=3 && n!=5 && n!=7 && n!=13 && n!=17 && n!=19 && n!=31)
        {

            printf("Given number is prime. But, NO perfect number is available.\n");

        }
        else if(prme==0)
            printf("Given number is NOT prime! NO perfect number is available.\n");
        else

            printf("Perfect: %lld!\n",cal);

    }
    return 0;
}


