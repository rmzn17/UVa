#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,tc,len;
    string s;

    scanf("%d",&tc);
    getchar();

    while(tc--)
    {
        getline(cin,s);
        len=s.size();
        if(s=="1"||s=="2"||s=="78")
        printf("+\n");
        else if(s[len-2]=='3'&&s[len-1]=='5')
            printf("-\n");
        else if(s[0]=='9'&&s[len-1]=='4')
            printf("*\n");
        else
            printf("?\n");


    }
    return 0;
}
