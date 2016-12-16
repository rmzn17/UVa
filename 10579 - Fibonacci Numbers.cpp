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


int fab[MAX][len];

void fibonacci()
{
    memset(fab,0,sizeof(fab[0][0])*MAX*len);
    int i,j;
    fab[0][0]=0;
    fab [1][0]=1;
    for(i=2; i<MAX; i++)
    {
        for(j=0; j<len; j++)
        {
            fab [i][j]= fab[i][j]+fab[i-1][j]+fab[i-2][j];
            if(fab[i][j]>9)
            {

                fab[i][j+1]=fab[i][j]/10;
                fab[i][j]=fab[i][j]%10;

            }
        }
    }

}
int main()
{

    int i,j,k,n;

    while(scanf("%d",&n)==1)
    {
        fibonacci();

        for(i=len-1; i>=0; i--)
        {
            if(fab[n][i]!=0)
                break;
        }
        for(j=i; j>=0; j--)
        {
            printf("%d",fab[n][j]);
        }
        printf("\n");

    }
    return 0;
}
