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

int one[1000];

int decimal_binary(int n)
{
    int ones=0,i=0;
    while(n>0)
    {
        one[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1; j>=0; j--)
    {
        if(one[j]==1)
            ones++;
    }
    return ones;
}

int Hexa_binary(int n )
{
    int one=0;
    while(n!=0)
    {
        int mod=n%10;
        if(mod==1)
            one++;

        if(mod==2)
            one++;
        if(mod==3)
            one+=2;

        if(mod==4)
            one++;

        if(mod==5)
            one+=2;
        if(mod==6)
            one+=2;
        if(mod==7)
            one+=3;
        if(mod==8)
            one+=1;
        if(mod==9)
            one+=2;
        n=n/10;
    }
    return one;
}


int main()
{
    int tc,i,number;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&number);
        int a=decimal_binary(number);
        int b=Hexa_binary(number);
        printf("%d %d\n",a,b);
    }
    return 0;
}

