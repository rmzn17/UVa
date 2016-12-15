#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
    int tc,i,j,k;
    vector<string>vectr;

    map<string,int>contry;
    string cname,girl;

    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        cin>>cname;
        getchar();
        getline(cin,girl);
        if(contry[cname])
        {
            contry[cname]++;
        }
        else
        {

            vectr.push_back(cname);
            contry[cname]++;
        }

        sort(vectr.begin(),vectr.end());
    }

    for(i=0; i<vectr.size(); i++)
    {

        cout<<vectr[i]<<" "<<contry[vectr[i]]<<endl;
    }
    vectr.empty();
    return 0;


}
