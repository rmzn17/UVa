#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <cstdio>
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
#include<sstream>
#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define MAX 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;


int dp[101][101];
int NCR(int n, int r)
{
    if(n<0||r<0)
        return 0;
    if(dp[n][r]!=-1) return dp[n][r];
    else
    {
        int ret = 0;
        for(int i=0; i<=n; i++)
            ret+=(NCR(n-i,r-1)%1000000);
        return dp[n][r]=ret%1000000;
    }

}


int main()
{

    int n,k;
    while(cin>>n>>k)
    {
        if(n==0&&k==0)
            break;
        memset(dp,-1,sizeof(dp));
        dp[0][0]=1;
        int ret=NCR(n,k);
        cout<<ret<<endl;
    }
    return 0;
}
