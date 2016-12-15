#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<iostream>
#include<math.h>
using namespace std;

vector<int>prme;
bool prime[20000010];
void Prime_Sieve()
{
    prime[1]=false;
    int i,not_prime;
    int n=sqrt(20000010);
    for(i=3; i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(not_prime=i*2; not_prime<=20000010; not_prime+=i)
            {
                prime[not_prime]=false;
            }
        }
    }

    int k;

    for(k=2; k<=20000010; k++)
    {
        if(prime[k]==true&&prime[k+2]==true)
        {
            prme.push_back(k);
        }
    }
}


int main()
{
    int number,c;
    memset(prime,true,sizeof(prime));
    Prime_Sieve();

    while(scanf("%d",&number)!=EOF)
    {

        printf("(%d, %d)\n",prme[number],prme[number]+2);

        prme.clear();

    }
    return 0;
}


