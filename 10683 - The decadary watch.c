#include<stdio.h>

int main()
{
    int H,M,S,D,h,m,s,d;


    while(scanf("%2d%2d%2d%2d",&H,&M,&S,&D)==4)
    {
        h = ((((H*60 + M) * 60 + S) * 100 + D)*1000.0/864.0);
        d = h % 100;
        h /= 100;
        s = h % 100;
        h /= 100;
        m = h % 100;
        h = h/100;

        printf("%d%02d%02d%02d\n",h,m,s,d);
    }
    return 0;
}
