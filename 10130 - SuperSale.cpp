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


int values[1005];
int weight[1005];
int profit[1005][1005];
int items,maxweight;

int knapsack()
{
    int i,j,w;
    for(i=0; i<=items; i++)
    {
        profit[i][0]=0;
    }
    for(w=0; w<=maxweight; w++)
    {
        profit[0][w]=0;
    }


    for(i=1; i<=items; i++)
    {

        for(w=0; w<=maxweight; w++)
        {
            if(weight[i]>w)
            {
                profit[i][w]=profit[i-1][w];
            }
            else
            {
                if(profit[i-1][w]>=profit[i-1][w-weight[i]]+values[i])
                {
                    profit[i][w]=profit[i-1][w];

                }
                else
                {
                    profit[i][w]=profit[i-1][w-weight[i]]+values[i];
                }
            }
        }
    }
    return profit[items][maxweight];
}


int main()
{
    int i,j,k,tc;
    int maxprofit;
    scanf("%d",&tc);
    while(tc--)
    {
        maxprofit=0;
        scanf("%d",&items);
        for(i=1; i<=items; i++)
        {
            scanf("%d%d",&values[i],&weight[i]);
        }
        int total_person;
        scanf("%d",&total_person);
        while(total_person--)
        {
            scanf("%d",&maxweight);
            int temp=knapsack();
            maxprofit+=temp;
        }
        printf("%d\n",maxprofit);
    }
return 0;
}
