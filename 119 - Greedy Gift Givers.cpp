#include <iostream>
#include<stdlib.h>
#include <cstdio>
#include<sstream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define vc vector<int>
#define pb push_back
#define pf printf
#define mxpq priority_queue<int>
#define mnpq priority_queue<int,vector<int>,compare>
#define ms(a) memset(a,0,sizeof(a));
#define input(s) getline(cin,s);
#define mpii map<int,int>
#define mpsi map<string,int>
#define str string s;
#define sz size();
#define ln strlen(s);
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define mn2(a, b) (a<b?a:b)
#define mn3(a, b, c) mn2(a, mn2(b, c))
#define mn4(a, b, c, d) mn2(a, mn2(b, mn2(c, d)))
#define mx2(a, b) (a>b?a:b)
#define mx3(a, b, c) mx2(a, mx2(b, c))
#define mx4(a, b, c, d) mx2(a, mx2(b, mx2(c, d)))
#define max 1000001
#define Pinf 99999999999
#define Ninf -99999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;



int main()
{
    int n;
    int newline=1;
    while(cin>>n)
    {

        vector<string>v;
        mpsi mp;
        string s;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            v.pb(s);
            mp[s]=0;

        }


        int a,b;
        string giver;
        bool ok=false;
        for(int i=0; i<n; i++)
        {

            cin>>giver>>a>>b;
            if(b!=0)
            {
                ok=true;
                int temp=a/b;
                int temp1=b*temp;
                mp[giver]-=temp1;
                string s2;

                for(int j=0; j<b; j++)
                {
                    cin>>s2;
                    mp[s2]+=temp;
                }
            }

        }


        if(newline>1)
            printf("\n");

        for(int i=0; i<n; i++)
        {

            cout<<v[i]<<" "<<mp[v[i]]<<endl;

        }

        newline++;


    }

    return 0;
}


