#include<stdio.h>
#include<math.h>

int main()
{
    int tc,i,y1,y2,n,n1,x1,x2;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&n1);
        scanf("%d",&n);
        for(i=0; i<n1; i++)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

            if(x1>n||x2>n||y1>n||y2>n||x1<1||x2<1||y1<1||y2<1)
            {
                printf("no move\n");
                continue;
            }
            int diff1=abs(x1-x2);
            int diff2=abs(y1-y2);

            if(x1==x2&&y1==y2)
                printf("0\n");

            else if(diff1==diff2)
                printf("1\n");
            else if (diff1 % 2 == 0 && diff2 % 2 == 0)
                printf ("2\n");

            else if (diff1 % 2 != 0 && diff2 % 2 != 0)
                printf ("2\n");
            else
                printf("no move\n");

        }

    }
    return 0;
}

