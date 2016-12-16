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

int tax(double x)
{
    if(x<180001)
        return 0;
    if(x<200001)
        return 2000;
    if(x<480001)
        return ceil((x-180000)*0.1);

    double temp=0;
    if(x<880001)
    {
        x-=480000;
        temp=30000;
        return ceil((x*0.15) +temp);
    }
    if(x<1180001)
    {
        x-=880000;
        temp=90000;
        return ceil((x*0.2) +temp);
    }
    x-=1180000;
    temp=150000;
    return ceil((x*0.25) +temp);
}

int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1; i<n+1; i++)
    {
        scanf("%d",&x);

        printf("Case %d: %d\n",i,tax(x));
    }
    return 0;
}
