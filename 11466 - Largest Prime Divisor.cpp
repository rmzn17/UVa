#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<iostream>
#include<math.h>
using namespace std;

vector<long long int>prme;
bool prime[10001000];
long long int total=0;

void Prime_Sieve()
{


    long long int i,j,k,not_prime;
    prime[1]=false;

    for(i=2; i<=10001000; i++)
    {
        if(prime[i]==true)
        {
            prme.push_back(i);
            total++;
            for(not_prime=i+i; not_prime<=10001000; not_prime+=i)
            {
                prime[not_prime]=false;
            }
        }
    }

}

int main()
{

    memset(prime,true,sizeof(prime));
    Prime_Sieve();
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n<0) n*=-1;
        int cnt=0;
        long long int maxdivisor=0;
        for(long long int i=0; i<total&&n>1&&prme[i]<=n; i++)
        {
            if(n%prme[i]==0)
            {
                cnt++;
                while(n>1 && n%prme[i]==0)
                {
                    n/=prme[i];
                }
                maxdivisor=prme[i];

            }
            if(n==1)
                break;

        }

        if(n==1)
        {

            if(cnt>1)
                printf("%lld\n",maxdivisor);
            else
                printf("-1\n");
        }
        else
        {
            if(cnt>0)
                printf("%lld\n",n);
            else
                printf("-1\n");
        }
    }
    return 0;
}
