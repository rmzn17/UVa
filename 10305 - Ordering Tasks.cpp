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
#define max 1000001
#define Pinf 99999999999
#define Ninf -99999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;





int main()
{

    int n,e,a,b;
    map<int,int>indegree;

    while(cin>>n>>e)
    {
        vector<int>node;
        vector<int>graph[101];
        if(n==0&&e==0)
            break;

        indegree.clear();

        for(int i=1; i<=n; i++)
            indegree[i]=0;



        for(int i=1; i<=e; i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            indegree[b]++;
        }

        queue<int>q;

        for(int i=1; i<=n; i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
                //cout<<i<<" ";
                node.push_back(i);
            }
        }

        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int i=0; i<graph[u].size(); i++)
            {
                int v=graph[u][i];
                indegree[v]--;
                if(indegree[v]==0)
                {
                    q.push(v);
                    node.push_back(v);

                }
            }
        }
        cout<<node[0];
        for(int i=1; i<node.size(); i++)
        {
            cout<<" "<<node[i];
        }

        cout<<endl;


    }

    return 0;
}



