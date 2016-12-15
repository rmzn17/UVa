#include<stdio.h>

int main()
{
    int n,i,sum,k,faltu=0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        if(faltu==0)
            printf("PERFECTION OUTPUT\n");
        sum=0;

        for(i=1; i<n; i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(n==sum)
            printf("%5d  PERFECT\n",n);
        else if(sum>n)
            printf("%5d  ABUNDANT\n",n);
        else
            printf("%5d  DEFICIENT\n",n);

            faltu=1;
    }
}
