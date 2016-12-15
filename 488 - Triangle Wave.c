#include<stdio.h>

int main()
{
    int amplitude,frequency,i,j,k,tc,tcs;
    scanf("%d",&tc);
    for(tcs=1; tcs<=tc; tcs++)
    {
        scanf("%d %d",&amplitude,&frequency);
        for(i=1; i<=frequency; i++)
        {

            for(j=1; j<=amplitude; j++)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
            for(j=amplitude-1; j>=1; j--)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }
                if(tcs==tc&&i==frequency&&j==1)
                    break;
                printf("\n");
            }

            printf("\n");

        }

    }
    return 0;
}
