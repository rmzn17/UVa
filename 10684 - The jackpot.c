#include<stdio.h>

int main()
{
    int m,n,i,j,sum,maxsum;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        maxsum=0;
        while(n--)
        {
            scanf("%d",&m);
            sum=sum+m;
            if(sum<0)
                sum=0;
            if(sum>maxsum)
                maxsum=sum;
        }

       if(maxsum>0)
        printf("The maximum winning streak is %d.\n",maxsum);
       else
            printf("Losing streak.\n");
    }
    return 0;
}

