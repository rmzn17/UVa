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


int main()
{
    map<string,int> mm, md;
    mm["JAN"] = 31;
    mm["FEB"] = 28;
    mm["MAR"] = 31;
    mm["APR"] = 30;
    mm["MAY"] = 31;
    mm["JUN"] = 30;
    mm["JUL"] = 31;
    mm["AUG"] = 31;
    mm["SEP"] = 30;
    mm["OCT"] = 31;
    mm["NOV"] = 30;
    mm["DEC"] = 31;

    md["SUN"] = 1;
    md["MON"] = 2;
    md["TUE"] = 3;
    md["WED"] = 4;
    md["THU"] = 5;
    md["FRI"] = 6;
    md["SAT"] = 7;


    int t;
    cin>>t;
    while(t--)
    {
        string m,d;
        cin>>m>>d;
        int s, e;
        s = md[d];
        e = mm[m] + s - 1;

        int ans = 0;

        if(s <= md["FRI"] ) ans = 2;
        else ans = 1;

        s = 14;

        while(1)
        {
            if( s>=e )
            {
                s = e;
                if(s%7==0 || s%7>5)
                {
                    if( s%7==0 ) ans+=2;
                    else ans+=1;
                }
                break;
            }
            else if(s%7==0 || s%7>5)
            {
                if( s%7==0 ) ans+=2;
                else ans+=1;
            }
            s+=7;
        }

        cout<<ans<<"\n";
    }

    return 0;
}
