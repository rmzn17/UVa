# include <stdio.h>
long big_mod(long a,long p,long m)
{
    long r = 1;
    while(p!=0)
    {
        if(p%2==1) r = (r*a)%m;
        a = (a*a)%m;
        p = p/2;
    }
    return r;
}
int main()
{
    long t,a,i,p,val,m;
    while(scanf("%lld",&t) && t)
    {
        for(i=0; i<t; i++)
        {
            scanf("%lld %lld %lld",&a,&p,&m);

            printf("%lld\n",big_mod(a,p,m));
        }
    }
    return 0;
}
