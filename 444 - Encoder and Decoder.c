#include<stdio.h>
#include<string.h>


int main()
{
    char input[10000];
    while(gets(input))
    {
        int i,j=0,k,l,m,n,num1[10000],lnum1=0;
        if(input[0]>='0'&&input[0]<='9')
        {
            i=strlen(input)-1;
            while(i>=0)
            {
                n=0;
                while(n<32)
                {
                    n=n*10+(input[i]-'0');
                    i--;
                }
                printf("%c",n);
            }
        }
        else
        {
            for(j=strlen(input)-1; j>=0; j--)
            {
                m=input[j];
                lnum1=0;
                while(m!=0)
                {
                    num1[lnum1++]=m%10;
                    m=m/10;
                }
                for(i=0; i<lnum1; i++)
                {
                    printf("%d",num1[i]);
                }
            }
        }
        printf("\n");
    }
}
