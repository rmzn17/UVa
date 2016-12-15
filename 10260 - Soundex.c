#include<stdio.h>
#include<string.h>

int main()
{
    char input[100];
    int i,j,len;
    while(gets(input))
    {
        len=strlen(input);
        for(i=0; i<len; i++)
        {
            if(input[i]=='B'||input[i]=='F'||input[i]=='P'||input[i]=='V')
            {
                if(input[i-1]=='B'||input[i-1]=='F'||input[i-1]=='P'||input[i-1]=='V')
                    printf("");
                else
                    printf("1");
            }
            else if(input[i]=='C'||input[i]=='G'||input[i]=='J'||input[i]=='K'||input[i]=='Q'||input[i]=='S'||input[i]=='X'||input[i]=='Z')
            {
                if(input[i-1]=='C'||input[i-1]=='G'||input[i-1]=='J'||input[i-1]=='K'||input[i-1]=='Q'||input[i-1]=='S'||input[i-1]=='X'||input[i-1]=='Z')
                    printf("");
                else
                    printf("2");
            }
            else if(input[i]=='D'||input[i]=='T')
            {
                if(input[i-1]=='D'||input[i-1]=='T')
                    printf("");
                else
                    printf("3");
            }
            else if(input[i]=='L')
            {
                if(input[i-1]=='L')
                    printf("");
                else
                    printf("4");
            }
            else if(input[i]=='M'||input[i]=='N')
            {
                if(input[i-1]=='M'||input[i-1]=='N')
                    printf("");
                else
                    printf("5");
            }
            else if(input[i]=='R')
            {
                if(input[i-1]=='R')
                    printf("");
                else
                    printf("6");
            }

        }
        printf("\n");
    }
    return 0;
}
