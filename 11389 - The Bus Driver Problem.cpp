#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int n,d,r,morning[105],evening[105],i,pay;

    while(scanf("%d%d%d",&n,&d,&r)==3)
    {
        if(n==0&&d==0&&r==0)
            break;
        pay=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&morning[i]);

        }
        sort(morning, morning + n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&evening[i]);

        }
        sort(evening, evening + n,greater<int>());

        for(i=0; i<n; i++)
        {
            int total=morning[i]+evening[i];
            if(total>d)
            {
                pay=pay+(total-d)*r;
            }
        }
        printf("%d\n",pay);
    }
    return 0;
}

