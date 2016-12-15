#include<stdio.h>

int main()
{
    long int n,profit;

    while(scanf("%ld",&n)==1)
    {
        if(n<0)
            break;
        if(n==1)
            printf("0%%\n");
        else
        {
        profit=n*25;
        printf("%ld%%\n",profit);
        }
    }
    return 0;
}
