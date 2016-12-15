#include<stdio.h>

int GCD (int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD (b, a % b);
}

int main()
{
    int i,j,N,G;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
            break;
        G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }

        printf("%d\n",G);
    }
    return 0;
}
