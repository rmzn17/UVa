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


void GenPrime();
void DigitPrime();
long int prime[1000005];
long int dprime[1000005];

int main()
{

    long int t,t1,t2,i,sum,n,j,total;
    while(scanf("%ld",&t)==1)
    {

        GenPrime();
        DigitPrime();
        for(i=1; i<=t; i++)
        {
            scanf("%ld%ld",&t1,&t2);
            total=dprime[t2]-dprime[t1-1];
            printf("%ld\n",total);
        }
    }
    return 0;
}

void GenPrime()
{
    long int i,j,m;
    m=(long int)sqrt(1000005);
    memset(prime, 1, sizeof(prime));
    prime[0]=prime[1]=0;
    for(i=2; i<=m; i++)
    {
        if(prime[i])
        {
            for(j=i+i; j<1000005; j+=i)
                prime[j]=0;
        }

    }

}
void DigitPrime()
{
    long int n,i,nodprime,sum;
    nodprime=0;
    for(i=2; i<1000005; i++)
    {
        if(prime[i])
        {
            sum=0;
            n=i;
            while(n>9)
            {
                sum+=n%10;
                n/=10;
            }
            sum+=n;
            if(prime[sum])
                nodprime+=1;
        }
        dprime[i]=nodprime;
    }
}

