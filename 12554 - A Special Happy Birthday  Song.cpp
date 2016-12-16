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

string ss[]=
{
    "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you",  "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"

};


vector<string>vec;
bool flag[103];

int main()
{
    string s;
    int i,j,l,tst;
    scanf("%d",&tst);
    l=tst;
    while(l--)
    {
        cin>>s;
        vec.push_back(s);
    }
    i=j=0;

    while(1)
    {
        cout<<vec[i++]<<": "<<ss[j++]<<"\n";
        flag[i-1]=1;
        if(flag[tst-1]==1 && j==16)
            break;
        if(i==tst)
            i=0;
        if(j==16)
            j=0;
    }

    return 0;
}

