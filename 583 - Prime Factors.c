#include<stdio.h>

int main()
{
    long long int g,i;
    while(scanf("%lld",&g)==1)
    {
        if(g==0)
            break;
        printf("%lld = ",g);
        if(g<0)
        {
            printf("-1 x ");
            g=g*-1;
        }

        for(i=2; i*i<=g; i++)
        {
            if(g%i==0)
            {
                printf("%lld x ",i);
                g=g/i;
                i=1;
            }
        }
        printf("%lld\n",g);

    }
    return 0;
}
