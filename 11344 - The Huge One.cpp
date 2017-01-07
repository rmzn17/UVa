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
#define mx 10001
#define Pinf 99999999999
#define Ninf -99999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;


int md(string s,int mod)
{
    long number=0;
    for(int i=0; i<s.size(); i++)
    {
        number*=10;
        number+=s[i]-'0';
        number%=mod;
    }

    return number;
}


int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        string n;
        cin>>n;
        int m,x,y;

        vector<int>st;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>x;
            st.push_back(x);
        }

        bool ok=true;

        for(int ii=0; ii<st.size(); ii++)
        {

            if(md(n,st[ii])!=0)
            {
                ok=false;
                break;
            }

        }

        if(ok)
        {
            cout<<n<<" - Wonderful."<<endl;
        }
        else
        {
            cout<<n<<" - Simple."<<endl;
        }
    }
    return 0;
}


