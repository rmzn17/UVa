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
    long int x[100000],y[100000],tc,n,k;
    vector<long int>diff;

    int cs=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        long int lav=0,khoti=0;
        for(long int i=0; i<n; i++)
        {
            cin>>x[i];
            // khoti+=x[i];

        }
        for(long int i=0; i<n; i++)
        {
            cin>>y[i];

            // lav=lav+y[i];

        }
        long int count=0;

        for(long int i=0; i<n; i++)
        {

            diff.push_back(y[i]-x[i]);

        }
        lav=0;
        sort(diff.begin(),diff.end());
        for(long int i=0; i<n; i++)
        {
            if(k>0&&diff[i]<0)
            {
                k--;
                continue;

            }
            lav=lav+diff[i];

        }

        if(lav<0)
            printf("Case %d: No Profit\n",cs++);
        else
            printf("Case %d: %ld\n",cs++,lav);
        diff.clear();

    }
    return 0;
}
