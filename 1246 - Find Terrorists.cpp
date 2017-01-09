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


bool prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;


}
bool ans[10003];

int div(int n)
{
    int d=0;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i==n)
            d+=1;
        else if(n%i==0)
            d+=2;
    }
    return d;
}

void calculate()
{
    memset(ans,false,sizeof(ans));
    for(int i=2; i<=10003; i++)
    {
        int dv=div(i);

        if(prime(dv))
            ans[i]=true;
    }
}

int main()
{
    calculate();
    int tc,cs=1,n,m;
    scanf("%d",&tc);
    while(tc--)
    {

        scanf("%d%d",&n,&m);
        bool ok=false;

        bool check_print=true;
        bool check=true;
        for(int i=n; i<=m; i++)
        {
            if(ans[i])
            {
                if(check_print==false)
                    printf(" ");
                printf("%d",i);
                check=check_print=false;
            }

        }
        if(check==true)printf("-1");
        printf("\n");


    }

    return 0;
}




