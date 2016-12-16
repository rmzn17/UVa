#include<cstdio>
#include<queue>
#include<stack>
#include<vector>
#include<string.h>
using namespace std;
vector<int>value;
vector<int>live;
vector<int>wt;
bool  die[10001];

int main()
{
    int n,i,j,alive;
    while(scanf("%d%d",&n,&alive)==2)
    {

        memset(die,true,sizeof(die));

        for(int i=0; i<alive; i++)
        {
            int a;
            scanf("%d",&a);
            die[a]=false;
        }
        if(n==alive)
            printf("*\n");
        else
        {
            for(i=1,j=1; i<=n; i++,j++)
            {
                if(die[i]==true)
                    printf("%d ",j);
            }
            printf("\n");

        }
    }
    return 0;
}
