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


using namespace std;
long int ways[100005];
int coin[5]= {1,5,10,25,50};

void coin_change()
{
    long int i,j;
    ways[0]=1;
    for(i=0; i<5; i++)
    {
        for(j=coin[i]; j<100005; j++)
        {
            ways[j]+=ways[j-coin[i]];
        }
    }

}


int main()
{
    coin_change();

    long int taka;
    while(scanf("%ld",&taka)==1)
    {
        int way=ways[taka];
        if(way==1)
            printf("There is only %d way to produce %d cents change.\n",way,taka);
        else
        printf("There are %ld ways to produce %ld cents change.\n",way,taka);
    }
    return 0;
}
