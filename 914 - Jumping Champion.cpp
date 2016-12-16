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


int prime[MAX];
int diff[MAX];
void sieve()
{
    int i,j,k;
    memset(prime,0,sizeof(prime));
    prime[0]=1;
    prime[1]=1;
    k=sqrt(MAX);
    for(i=4; i<MAX; i+=2)
    {
        prime[i]=1;
    }
    for(i=3; i<k; i+=2)
        if(!prime[i])
        {
            for(j=i*i; j<MAX; j+=i+i)
            {
                if(!prime[j])
                {
                    prime[j]=1;
                }
            }
        }
}


int main()
{
    int i,j,k,maximum,t,up,low,dif,d,temp;
    sieve();
    scanf("%d", &t);
    int  U, L;
    while(t--)
    {
        scanf("%d %d", &L, &U);
        for(i=L; i<=U; i++)
        {
            if(prime[i]==0)
            {
                low = i;
                break;
            }
        }
        memset(diff,0,sizeof(diff));
        for(i=low+1; i<=U; i++)
        {
            if(prime[i]==0)
            {
                up = i;
                d = up - low;
                diff[d]++;
                low= up;
            }
        }
        dif=0;
        for(i=1; i<500; i++)
        {
            if(diff[i]==dif)
            {
                temp=0;
            }
            else if(diff[i]>dif)
            {
                dif= diff[i];
                maximum=i;
                temp=1;
            }
        }
        if(temp)
        {
            printf("The jumping champion is %d\n", maximum);
        }
        else
        {
            printf("No jumping champion\n");
        }
    }
    return 0;
}
