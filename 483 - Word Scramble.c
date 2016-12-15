#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len;
    char str[1000];
    while(gets(str))
    {

        len=strlen(str);
        int faltu=-1;
        for(i=0; i<len; i++)
        {
            if(str[i]==' ')
            {
                for(j=i-1; j>faltu; j--)

                    printf("%c",str[j]);
                printf(" ");
                faltu=i;

            }
        }

        for(i=len-1; i>faltu; i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");

    }
}
