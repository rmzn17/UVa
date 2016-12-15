#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int x,i;
    char input[50];
    while(scanf("%s",&input)==1)
    {
        x=strlen(input);
        for(i=0; i<x; i++)
        {

            if(input[i]=='A'||input[i]=='B'||input[i]=='C')
                printf("2");
            else if(input[i]=='D'||input[i]=='E'||input[i]=='F')
                printf("3");
            else if(input[i]=='G'||input[i]=='H'||input[i]=='I')
                printf("4");
            else if(input[i]=='J'||input[i]=='K'||input[i]=='L')
                printf("5");
            else if(input[i]=='M'||input[i]=='N'||input[i]=='O')
                printf("6");
            else if(input[i]=='P'||input[i]=='Q'||input[i]=='R'||input[i]=='S')
                printf("7");
            else if(input[i]=='T'||input[i]=='U'||input[i]=='V')
                printf("8");
            else if(input[i]=='W'||input[i]=='X'||input[i]=='Y'||input[i]=='Z')
                printf("9");

            else
                printf("%c",input[i]);
        }
        printf("\n");
    }
    return 0;
}
