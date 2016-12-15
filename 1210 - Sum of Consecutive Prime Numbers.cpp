#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include <cstring>

using namespace std;

vector<int>prime;
bool prme[10005];

void prime_seive()
{
    memset(prme,true,sizeof(prme));
    prme[0]=false;
    prme[1]=false;

    for(int i=2; i*i<=10000; i++)
    {
        if(prme[i]==true)
        {

            for(int j=i*2; j<=10000; j+=i)
            {
                prme[j]=false;
            }
        }
    }

    for(int i=0; i<=10000; i++)
    {
        if(prme[i])
            prime.push_back(i);
    }
}

int main()
{
    prime_seive();
    int number,i,j;
    while(scanf("%d",&number)==1)
    {
        if(number==0)
            break;
        int cnt=0,primesum;

        for(int i=0; i<prime.size()&&prime[i]<=number; i++)
        {
            primesum=0;
            for(j=i; j<prime.size(); j++)
            {

                primesum+=prime[j];
                if(primesum==number)
                {
                    cnt++;
                    break;
                }

            }
        }

        printf("%d\n",cnt);
    }


    return 0;
}


