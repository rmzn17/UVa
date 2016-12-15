#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<iostream>
#include<math.h>
using namespace std;

vector<long int>prime;
bool prme[1000001];
vector<int>factor;
void prime_seive(long int n)
{
    memset(prme,true,n);

    prime.push_back(2);
    for(long int i=3; i*i<=n; i+=2)
    {
        if(prme[i]==true)
        {
            for(long int not_prime=i*i; not_prime<=n; not_prime+=2*i)
                prme[not_prime]=false;
        }
    }

    prme[1]=0;

    for (long int i=4; i<=n ; i+=2)
    {
        if (prme[i]==true)
        {
            prme[i]=false;
        }
    }

    for (long int i=3; i<=n ; i++)
    {
        if (prme[i]==true)
        {
            prime.push_back(i);
        }
    }
}


int main()
{

    prime_seive(1000000);

    long int n,i,j,cnt,l,same;

    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        cnt=0;
        same =0;
        l=n/2;
        for(i=0; i<l; i++)
        {
            for(j=0; j<n; j++)
            {
                if(prime[i]==prime[j]&& prime[i]+prime[j]==n)
                {
                    same++;
                }
                else if(prime[i]+prime[j]==n)
                {
                    cnt++;
                }

                if(prime[i]+prime[j]>n)
                    break;
            }
        }
        cnt = cnt/2 +same;
        printf("%ld\n",cnt);
        prime.clear();
    }
    return 0;
}



