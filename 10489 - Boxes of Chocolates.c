#include<stdio.h>

int main ()
{
    int T,N,B,k,a,R,S;

    scanf("%ld",&T);

    while(T--)
    {
        scanf("%ld%ld",&N,&B);
        S=0;
        while(B--)
        {
            R=1;
            scanf("%ld",&k);
            while(k--)
            {
                scanf("%ld",&a);
                R=(R*a)%N;
            }
            S=(S+R)%N;
        }
        printf("%ld\n",S);
    }
    return 0;
}
