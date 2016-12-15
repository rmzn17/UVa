#include <stdio.h>
int main()
{
    int c1,c2,c3,c4,change;
    while(scanf("%d %d %d %d",&c1,&c2,&c3,&c4)== 4)
    {
        if(c1==0 && c2==0 && c3==0 &&c4==0)
            break;
         int degree=1080;
        change=c1-c2;
        if(change<0)
            change=(c1-c2)+40;
        degree=degree+change*9;
        change=c3-c2;
        if(change<0)
            change=(c3-c2)+40;
        degree=degree+change*9;

        change=c3-c4;
        if(change<0)
            change=(c3-c4)+40;
        degree=degree+change*9;
        printf("%d\n",degree);
    }
    return 0;
}
