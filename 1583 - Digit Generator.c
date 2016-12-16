#include<stdio.h>
#include<math.h>

int generator(int n)
{
    int i,sum=0,j;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int i,j,n,tc,digitsum,iterate;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        iterate=n-100;
        for(i=iterate; i<n; i++)
        {
            digitsum=i+generator(i);
            if(digitsum==n)
                break;
            else
                digitsum=0;
        }
        if(digitsum==0)
            printf("0\n");
        else
            printf("%d\n",i);
    }
}
