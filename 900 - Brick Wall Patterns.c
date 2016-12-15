#include<stdio.h>

int main()
{
    int n,i,j,k,pattern[100];

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        pattern[0]=1;
        pattern[1]=2;

        for(i=2; i<n+1; i++)
        {
            pattern[i]=pattern[i-1]+pattern[i-2];
        }
        printf("%d\n",pattern[n-1]);
    }
    return 0;
}

