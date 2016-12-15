#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int l,i,j,k,dec,count,hex;
    char input[10000],hexa[10000];
    while( gets(input))
    {

        l=strlen(input);

        if(input[0]=='0' && input[1]=='x')
        {
            dec=0;
            for(i=2; i<l; i++)
            {
                if(input[i]=='A')
                    dec=dec*16+10;
                else if(input[i]=='B')
                    dec=dec*16+11;
                else if(input[i]=='C')
                    dec=dec*16+12;
                else if(input[i]=='D')
                    dec=dec*16+13;
                else if(input[i]=='E')
                    dec=dec*16+14;
                else if(input[i]=='F')
                    dec=dec*16+15;
                else
                    dec=dec*16+input[i]-'0';
            }
            printf("%d\n",dec);
        }


        else
        {
            count=0;
            dec=atoi(input);
            if(dec<0) break;
            for(i=0; i!=-1; i++)
            {
                hex=dec%16;
                dec/=16;
                if(hex==10)
                    hexa[i]='A';
                else if(hex==11)
                    hexa[i]='B';
                else if(hex==12)
                    hexa[i]='C';
                else if(hex==13)
                    hexa[i]='D';
                else if(hex==14)
                    hexa[i]='E';
                else if(hex==15)
                    hexa[i]='F';
                else
                    hexa[i]=hex+'0';
                count=count+1;
                if(dec<=0)    break;
            }
            printf("0x");
            for(i=count-1; i>=0; i--)
                printf("%c",hexa[i]);
            printf("\n");
        }
    }
    return 0;
}
