#include<stdio.h>
#include<string.h>

int main()
{
    long int  tc,a,b,c,d,i,j,n;
    char input[100];
    scanf("%ld",&tc);
    getchar();
    while(tc--)
    {
        gets(input);
        a=0;
        b=1;
        c=1;
        d=0;
        long int  x=(a+b);
        long int y=(c+d);

        int len=strlen(input);
        for(i=0; i<len; i++)
        {
            if(input[i]=='R')
            {
                a=x ;
                c=y;
            }
            else if(input[i]=='L')
            {
                b=x;
                d=y;
            }
            x=a+b ;
            y=c+d;
        }

        printf("%ld/%ld\n",x,y);
    }
    return 0;
}

