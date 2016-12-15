#include<stdio.h>
#include<math.h>

int main()
{
    long int tc,i,y1,y2,k,ans[10000],n;
    scanf("%ld",&tc);
    while(tc--)
    {
        int flag=1;
        scanf("%ld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%ld%ld",&y1,&y2);
            ans[i]=abs(y2-y1);

        }
        int previous=ans[0];

        for(i=1; i<n; i++)
        {

            if(ans[i]!=previous)
            {
                flag=0;
                break;
            }

        }

        if(flag==0)
            printf("no\n");
        else
            printf("yes\n");
        if (tc)
            printf("\n");
    }
    return 0;
}
