#include<stdio.h>
#include<math.h>

int main()
{
    long long int first,last,result,a,b,i,j,value;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld%lld",&first,&last);
        if(first==1&&last==0)
        {
            printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
            continue;
        }
        a=first;
        b=last;
        int max=0;
        for(i=first; i<=last; i++)
        {
            int count=0;
            for(j=1; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    count++;
                    if(i/j!=j)
                    {
                        count++;
                    }
                }
            }
            if(count>max)
            {
                max=count;
                value=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",a,b,value,max);
    }
    return 0;
}
