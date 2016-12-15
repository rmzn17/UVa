#include<stdio.h>

int main()
{
    int tc,n,x,y,z,i,j;
    scanf("%d",&tc);
    for(i=1; i<=tc; i++)
    {
        int premium=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d%d%d",&x,&y,&z);

            premium=premium+(x*z);

        }
        printf("%d\n",premium);
    }
    return 0;
}
