#include<stdio.h>

int main()
{
    int gcd,lcm,tc,i;
    scanf("%d",&tc);
    for(i=1; i<=tc; i++)
    {
        scanf("%d%d",&gcd,&lcm);
        if(lcm%gcd==0)
            printf("%d %d\n",gcd,lcm);
        else
            printf("-1\n");
        }

}
