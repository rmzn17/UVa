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

int main()
{
    int n,edge,visited[1000],i,j,nd,x,y,k,d;
    bool samecolor;
    vector<int>node[1000];
    queue<int>source;

    while( scanf("%d",&n))
    {

        if(n==0)
            break;
        scanf("%d",&edge);

        for(k=0; k<edge; k++)
        {
            cin>>x>>y;
            node[x].push_back(y);
            node[y].push_back(x);
        }
        samecolor=false;




        memset(visited,-1,sizeof(visited));

        visited[0]=0;
        source.push(0);
        while(!source.empty())
        {
            nd=source.front();
            source.pop();
            int len=node[nd].size();
            for(i=0; i<len; i++)
            {
                if(visited[node[nd][i]]==-1)
                {
                    if(visited[nd]==0)
                        visited[node[nd][i]]=1;
                    else
                        visited[node[nd][i]]=0;

                    source.push(node[nd][i]);
                }
                else
                {
                    if(visited[node[nd][i]]==visited[nd])
                    {
                        samecolor=true;
                        break;
                    }
                }

            }
            if(samecolor==true)
                break;

        }

        if(samecolor==true)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");

        for(i=0; i<n; i++)
        {
            node[i].clear();
            source=queue<int>();
        }
    }
    return 0;
}



