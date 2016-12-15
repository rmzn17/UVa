#include<stdio.h>
#include<string.h>

int main()
{
    int inptlen,grplen,otlen,i,n,j;
    char in[50];


    while(scanf("%d",&n)==1)
    {
        getchar();
        if(n==0)
            break;

        gets(in);
        inptlen=strlen(in);
       grplen=inptlen/n;
       for(i=1;i<=n;i++)
       {
           otlen=i*grplen;
           for(j=otlen-1;j>=otlen-grplen;j--)
           {
               printf("%c",in[j]);
           }
       }
       printf("\n");

    }
    return 0;
}

