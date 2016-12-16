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

long long int  Z,I,M,L;

long long int Random_Numbers()
{
    long long int i=L,n=0;
    long long int num[M+1];
    for(i=0; i<=M; i++)
    {
        num[i]=0;
    }
    while(1)
    {
        i=(Z*i+I)%M;
        num[i]++;
        if(num[i]==2)break;
        n++;
    }
    return n;
}


int main()
{

    int cs=1;
    while(scanf("%lld %lld %lld %lld",&Z,&I,&M,&L)==4)
    {
        if(Z==0&&I==0&&M==0&&L==0)
            break;
        long long int  i,j,k,l,m,n=0,num1[M+1];
        for(i=0; i<=M; i++)
        {
            num1[i]=0;
        }

        long long int ans=Random_Numbers();
        printf("Case %d: %lld\n",cs,ans);
        cs++;
    }
    return 0;
}
