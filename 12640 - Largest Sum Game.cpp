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
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;


int main()
{




    int n;
    int tc;
    string ss;
    while(getline(cin,ss))
    {

        vector<int>v;
        stringstream nn(ss);

        int x;
        while(nn>>x)
        {
            v.push_back(x);
        }


//        for(int i=0; i<v.size(); i++)
//        {
//        cout<<" "<<v[i];
//        }


        int positive=0;
        int maxsum=0,alt=0;
        int start=0;
        int endd=0;
        int a=0,b=0;
        int s=0;
        for(int i=0; i<v.size(); i++)
        {
            positive+=v[i];
            if(positive<0)
            {
                positive=0;

            }

            if(positive>maxsum)
            {
                maxsum=positive;

            }

        }

      cout<<maxsum<<endl;

    }
    return 0;
}
