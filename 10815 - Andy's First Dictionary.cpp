#include<stdio.h>
#include<iostream>
#include<set>
#include<cstring>
#include<iterator>
#include<vector>

using namespace std;

int main()
{

    char input[1000];
    set<string>store;
    set<string> :: iterator print;
    while(gets(input))
    {
        string temp="";
        int len=strlen(input);
        for(int i=0; i<=len; i++)
        {
            if(isalpha(input[i]))
                temp+=tolower(input[i]);
            else if(temp!="")
            {
                store.insert(temp);
                temp="";
            }
        }
    }
    for(print=store.begin(); print!=store.end(); print++)
        cout<<*print<<endl;

    return 0;
}
