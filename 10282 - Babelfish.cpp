#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int i,j,k;
    char s[11],ss[11],sss[25],input[50];
    map<string,string>strmap;

    while(gets(input))
    {
        if(strcmp(input,""))
        {
            sscanf(input,"%s %s",&s,&ss);
            if(strmap[ss]=="")
                strmap[ss]=s;
        }
        else
        {
            while( gets(sss) )
            {
                if( strmap[sss] != "" )
                    cout << strmap[sss] << '\n';
                else
                    cout << "eh\n";
            }
        }
    }

    return 0;
}


