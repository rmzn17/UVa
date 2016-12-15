#include <stdio.h>

int main ()
{
    int N,arr[10000],tc,i,max,j;
    scanf("%d",&tc);
    while(tc--)
    {

        max=0;
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            scanf("%d",&arr[i]);

        }
        for(i=0; i<N; i++)
        {
            for(j=0; j<i; j++)
            {
                if(arr[j]<=arr[i])
                    max++;

            }

        }

        printf("%d\n",max);

    }
    return 0;
}



