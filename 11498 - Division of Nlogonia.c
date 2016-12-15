#include<stdio.h>

int main()
{
    int k,m,n,x,y,i,j;
    while(scanf("%d",&k)==1)
    {

        if(k==0)
            break;
        scanf("%d%d",&m,&n);

        for(i=0; i<k; i++)
        {
            scanf("%d%d",&x,&y);
            x=x-m;
            y=y-n;
            if(x*y==0)
                printf("divisa\n");
            else if(x>0&&y>0)
                printf("NE\n");
            else if(x<0&&y>0)
                printf("NO\n");
            else if(x<0&&y<0)
                printf("SO\n");
            else
                printf("SE\n");

        }


    }
    return 0;
}


