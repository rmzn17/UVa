#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
using namespace std;

vector<int>node[1050];


int main()
{
    int x, y, caseno=0;
    while(scanf("%d",&x)==1)
    {
        for(int j=0; j<x; j++)
        {
            scanf("%d",&y);
            node[1].push_back(y);
            node[y].push_back(1);
        }
        for(int i=2; i<=19; i++)
        {
            scanf("%d",&x);
            for(int j=0; j<x; j++)
            {
                scanf("%d",&y);
                node[i].push_back(y);
                node[y].push_back(i);
            }
        }
        int src, dest, n;
        scanf("%d",&n);
        printf("Test Set #%d\n",++caseno);
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&src, &dest);
            queue< int >q;
            int visited[1050]= {0}, level[1050];
            visited[src]=1;
            level[src]=0;
            q.push(src);
            while(!q.empty())
            {
                int u=q.front();
                q.pop();
                for(int l=0; l<node[u].size(); l++)
                {
                    int v = node[u][l];
                    if(!visited[v])
                    {
                        visited[v]=1;
                        level[v] = level[u]+1;
                        q.push(v);
                    }
                }

            }
            printf("%2d to %2d: %d\n", src, dest, level[dest]);
        }
        printf("\n");
        for(int i=0; i<21; i++)
        {
            node[i].clear();
        }
    }
    return 0;
}

