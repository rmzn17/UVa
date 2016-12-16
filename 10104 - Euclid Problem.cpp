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


int x,y,d;

int gcd_euclid(int a,int b)
{
    if(b==0)
        return a;
    return gcd_euclid(b,a%b);
}


int extended_Euclid(int a,int b)
{
    int x1,y1;

    if(b==0)
    {
        d=a;
        x=1;
        y=0;
        return a;
    }

    int ret=extended_Euclid(b,a%b);


    x1 = x-(a/b) * y;
    x = y;
    y = x1;

}



int main()
{
    int a,b,i,j;
    while(scanf("%d%d",&a,&b)==2)
    {
        int gcd=gcd_euclid(a,b);
        extended_Euclid(a,b);
        printf("%d %d %d\n",x,y,gcd);
    }
    return 0;
}
