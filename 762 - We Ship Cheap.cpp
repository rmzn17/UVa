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

map<string,vector<string> >graph;
map<string,string>parent;
map<string,int>visited;

bool bfs(string s,string d)
{

    parent.clear();
    queue<string>q;
    q.push(s);
    visited[s]=0;
    //parent.push_back(s);
    bool ok=false;
    while(!q.empty())
    {
        string u=q.front();

        if(u==d)
        {

            ok=true;
            break;
        }

        for(int i=0; i<graph[u].size(); i++)
        {
            string v=graph[u][i];
            if(!visited[v])
            {
                parent[v]=u;
                visited[v]=1;
                q.push(v);

            }
        }
        q.pop();
    }



    if(ok)
    {
        //int sz=parent.size();

        return true;
    }
    else
    {
        return false;

    }

}

void printPath(string a,string b)
{
    if(a==b) return;
    printPath(parent[a],b);
    cout<<parent[a]<<" "<<a<<endl;
}

int main()
{

    int n,newline=0;
    while(cin>>n)
    {
        graph.clear();
        string a,b;
        if(newline)
            printf("\n");

        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
            visited[a]=0;
            visited[b]=0;

        }


        string s,d;
        cin>>s>>d;

        bool ok=bfs(s,d);


        if(ok)
        {
            printPath(d,s);
        }
        else
            printf("No route\n");
        newline++;
    }

    return 0;
}


