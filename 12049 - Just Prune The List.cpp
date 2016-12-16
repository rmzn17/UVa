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

int s1[10002],s2[10002];

int EditDistance(int n,int m)
{
    if(m==0)
        return n;
    if(n==0)
        return m;
    if(s1[n-1]==s2[m-1])
        return EditDistance(n-1,m-1);

    return 1+MIN(EditDistance(n-1,m-1),MIN(EditDistance(n,m-1),EditDistance(n-1,m)));

}

int main()
{
    int n,m,tc;
    // cin>>tc;
    scanf("%d",&tc);
    while(tc--)
    {
        //cin>>n>>m;
        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++)
            // cin>>s1[i];
            scanf("%d",&s1[i]);


        for(int i=0; i<m; i++)
            //cin>>s2[i];
            scanf("%d",&s2[i]);

        int ret=EditDistance(n,m);
        cout<<ret<<endl;
        printf("%d\n",ret);

    }
    return 0;
}



