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

//bool prme[1000005];
//vector<long int>prime;
//
//void Prime_Sieve()
//{
//
//    memset(prme,true,sizeof(prme));
//    long int i,not_prime;
//
//    for(i=2; i*i<1000000; i++)
//    {
//        //printf("baal-%d\n",i);
//        if(prme[i]==true)
//        {
//
//            if(i%2!=0)
//                prime.push_back(i);
//            for(not_prime=i*2; not_prime<1000000; not_prime+=i)
//            {
//                prme[not_prime]=false;
//            }
//        }
//    }
//}

bool prime_cheqe(long int n)
{
    for(long int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;

    }
    return true;
}



int main()
{
    //Prime_Sieve();
//    for(int i=0; i<prime.size(); i++)
//        printf("%d ",prime[i]);
    long int n,a,b;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;

        int flag=0;

        for(int i=3; i<n; i++)
        {
            if(prime_cheqe(i)==1&&prime_cheqe(n-i)==1)
            {
                a=i;
                b=n-i;
                flag=1;
                break;

            }
        }
        if(flag==1)
            printf("%ld = %ld + %ld\n",n,a,b);

        else
            printf("Goldbach's conjecture is wrong.\n");

    }
    return 0;
}


