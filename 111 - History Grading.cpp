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


int lcs[1000][1000];

int main()
{
    int s1[1000],s2[1000];
    map<int,int>s11;
    map<int,int>s22;
    int n,m,cs=1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1[i];
        s11[s1[i]]=i;
    }


    while(cin>>s2[0])
    {
        s22[s2[0]]=0;
        for(int i=1; i<n; i++)
        {
            cin>>s2[i];
            s22[s2[i]]=i;
        }

        for(int i=0; i<n; i++)
            lcs[i][0]=0;
        for(int i=0; i<n; i++)
            lcs[0][i]=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s11[i]==s22[j])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=MAX(lcs[i][j-1],lcs[i-1][j]);
            }
        }

        printf("%d\n",lcs[n][n]);

    }

    return 0;
}



