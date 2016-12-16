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
    int tc,price[1000],k,m;
    string news;
    char charter[1000];
    scanf("%d\n",&tc);

    while(tc--)
    {
        double tot=0.0;
        scanf("%d\n",&k);
        for(int i=1; i<=k; i++)
        {

            scanf("%c%d\n",&charter[i],&price[i]);
        }

        scanf("%d\n",&m);

        for(int i=0; i<m; i++)
        {

            getline(cin,news);
            int len=news.size();

            for(int j=1; j<=k; j++)
            {
                for(int k=0; k<len; k++)
                {
                    if(charter[j]==news[k])
                    {
                        tot=tot+price[j];
                    }
                }
            }
        }
        tot=tot/100;
        printf("%.2lf$\n",tot);
    }
}
