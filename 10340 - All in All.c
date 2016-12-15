#include<stdio.h>

char main_string[500000];
long long int len2=0;
int cheq(int location,char ch)
{
    long long int i;
    for(i=location; main_string[i]!='\0'; i++)
    {
        if(main_string[i]==ch)
            return ++i;

    }
    return 0;
}

int main()
{
    long long int i,j,x,location;
    char sub_string[500000];

    while(scanf("%s%s",sub_string,main_string)==2)
    {

        location=0;
        int len=strlen(sub_string);
        len2=strlen(main_string);

        for(i=0; sub_string[i]!='\0'; i++)
        {
            location=cheq(location,sub_string[i]);
            if(location==0)
                break;
        }
        if(location==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
