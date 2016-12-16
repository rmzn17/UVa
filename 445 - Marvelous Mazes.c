#include<stdio.h>
#include<string.h>

int main()
{
    char input[1000];
    int i,j,count=0;
    while(gets(input))
    {
        count=0;
        int len=strlen(input);
        for(i=0; i<len; i++)
        {
            if(input[i]=='1')
                count++;
            else if(input[i]=='2')
                count=count+2;
            else if(input[i]=='3')
                count=count+3;
            else if(input[i]=='4')
                count=count+4;
            else if(input[i]=='5')
                count=count+5;
            else if(input[i]=='6')
                count=count+6;
            else if(input[i]=='7')
                count=count+7;
            else if(input[i]=='8')
                count=count+8;
            else if(input[i]=='9')
                count=count+9;
            else if(input[i]=='b')
            {

                int k;
                for(k=0; k<count; k++)
                    printf(" ");
                count=0;
            }
            else if(input[i]=='!')
                printf("\n");
            else
            {

                int k;
                for(k=0; k<count; k++)
                {
                    printf("%c",input[i]);
                }
                count=0;

            }

        }
        printf("\n");
    }
    return 0;
}
