#include<stdio.h>

int main()
{
    int s,n,i,j,sum,cs=1;
    int arr1[15],arr2[15];
    while(scanf("%d",&s)==1)
    {

        if(s<0)
            break;
            sum=s;
        for(i=0; i<12; i++)
            scanf("%d",&arr1[i]);
        for(i=0; i<12; i++)
            scanf("%d",&arr2[i]);
        printf("Case %d:\n",cs);
        for(j=0; j<12; j++)
        {

            if(sum>=arr2[j])
            {
                sum=sum+arr1[j];
                printf("No problem! :D\n");
                sum=sum-arr2[j];
            }
            else
            {
                 sum=sum+arr1[j];
                printf("No problem. :(\n");
            }
        }


            cs++;
    }
    return 0;
}
