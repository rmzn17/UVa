#include<stdio.h>

int main()
{
    int x,y,diff,minstep,tc;
    scanf("%d",&tc);
    while(tc--)
    {
        minstep=0;
        scanf("%d%d",&x,&y);
        diff=y-x;
        int firstLast=2;
        if(diff!=0)
        {
            int sumstep=0;

            while(diff>sumstep)
            {
                sumstep=sumstep+(firstLast/2);
                minstep++;
                firstLast++;
            }
        }
        printf("%d\n",minstep);
    }
}
