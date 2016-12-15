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
void prime_seive(int n)
{
    memset(prme,true,n);
    prme[0]=false;
    prme[1]=false;
    prime.push_back(2);
    for(int i=3; i*i<n; i+=2)
    {
        if(prme[i]==true)
        {
            for(int not_prime=i*i; not_prime<n; not_prime+=2*i)
                prme[not_prime]=false;
        }
    }
    for (int i=2; i<=n ; i++)
    {
        if (prme[i]==true)
        {
            prime.push_back(i);
        }
    }
}

int prime_factor(int n)
{
    int divisor=0;
    for(int i=0; i<prime.size(); i++)
    {
        int cnt=0;
        while(n%prime[i]==0)
        {
            cnt++;
            factor.push_back(prime[i]);
            n=n/prime[i];
        }
        if(cnt>1)
            divisor+=1;
        else
            divisor+=cnt;
    }

    return divisor;
}

int main()
{

    prime_seive(1000000);

    int number;
    while(scanf("%d",&number)==1)
    {
        if(number==0)
            break;
        printf("%d : %d\n",number,prime_factor(number));
    }
    return 0;
}

