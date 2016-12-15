#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    int tc,j,len,m,f;

    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        m=0;
        f=0;
          string ch;
         getline(cin,ch);
        len=ch.size();

        for(j=0;j<len;j++)
        {
            if(ch[j]=='M')
                m++;
            if(ch[j]=='F')
                f++;

        }
        if(m==f&&len>2)
            printf("LOOP\n");
        else
        printf("NO LOOP\n");

    }
    return 0;
}
