#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main()
{
    char ss[1010],ss1[1010];

    map<char,int>cmp;

    while(gets(ss))
    {

        gets(ss1);

        int len1=strlen(ss);
        sort(ss,ss+len1);
        int len2=strlen(ss1);

        sort(ss1,ss1+len2);
        cmp.clear();
        for(int i=0; i<len1; i++)
            cmp[ss[i]]++;
        for(int i=0; i<len2; i++)
            if(cmp[ss1[i]])
            {
                cout<<ss1[i];
                cmp[ss1[i]]--;
            }

        cout<<endl;
    }
    return 0;
}

