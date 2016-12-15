#include<stdio.h>

int main()
{
    int tc,n,m;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&n,&m);
        if((n-1)%(m-1)==0)
            printf("%d\n",(n-1)/(m-1));
        else
            printf("cannot do this\n");
    }
    return 0;
}
