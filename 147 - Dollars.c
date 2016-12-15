#include<stdio.h>
int coin[]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
long long int ways[50000];

void coin_change()
{
    long long int i,j;
    memset(ways,0,sizeof(ways));
    ways[0]=1;
    for(i=0; i<11; i++)
    {
        for(j=coin[i]; j<=50000; j++)
        {
            ways[j]=ways[j]+ways[j-coin[i]];

        }
    }
}

int main()
{
    coin_change();

  long long int number,x,y;
    while(scanf("%lld.%lld",&x,&y)==2)
    {
        if(x==0&&y==0)
            break;
        number=x*100+y;
        printf("%3lld.%.2lld%17lld\n",x,y,ways[number]);

    }
    return 0;
}


