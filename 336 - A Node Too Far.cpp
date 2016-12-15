#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
   int n,edge,a,b,i,j,k,src,level;
   int graph[100][100];
   int color[100];
   int Visited[100];
   queue<int>q;
   while(scanf("%d",&edge))
   {
       if(edge==0)
        break;
       for(i=0;i<edge;i++)
       {
           scanf("%d%d",&a,&b);
           graph[a][b]=1;
           graph[b][a]=1;

       }
       while(scanf("%d%d",&src,&level))
       {
           if(level==0&&src==0)
            break;

             Visited[src]=1;
            //q.push(src);
            i=0;
        while(graph[src][i]==1)
       }

   }
}
