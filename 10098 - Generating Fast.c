#include<stdio.h>
#include<string.h>

int input[20];

int binary[20]={0};
char out[20];

void permutation(int st,int n)
{
    int i;
    if(st==n+1)
    {
        for( i = 1 ; i <= n ; i ++)
        printf ( "%d " ,binary[i] ) ;
        printf("\n");
    }
    for(i = 1 ; i <= n ; i ++) if(!binary[i])
    {
        binary[i]=1;
        input[st]=i;
        permutation(st+1,n);

       // strcpy(out[i],input[i]);
        binary[i]=i;
    }

}

int main()
{
    int len,i,n,st=1;

    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            gets(input);
            len=strlen(input);
            permutation(st,len);
        }
    }
}
