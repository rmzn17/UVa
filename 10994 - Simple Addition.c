#include<stdio.h>

int main()
{
    long long int p,q,i,mod,div,sum;

    while(scanf("%lld%lld",&p,&q)!=EOF)
    {
        sum=0;
        if(p<0&&q<0)
            break;

        for(i=p; i<=q; i++)
        {
            mod=i%10;
            if(mod>0)
                sum=sum+mod;
            else if(i==0)
                sum=sum+i;
            else
            {
                div=(i/10);
                sum=sum+div;
            }

        }

        printf("%lld\n",sum);
    }
    return 0;
}
