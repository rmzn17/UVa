#include<stdio.h>

int main()
{
    int k,i,div[100],j,cse=1,n,l,tc;

    scanf("%d",&tc);
    while(tc--)
    {
        j=0;
        scanf("%d",&k);
        l=k/2+1;
        for(i=2; i<l; i++)
        {
            if(k%i==0)
                div[j++]=i;
            if(j==2)break;
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",cse,k,div[0],k/div[0],div[1],k/div[1]);
        cse++;

    }

}
