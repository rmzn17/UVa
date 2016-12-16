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

#define MAX 1000000
char  prime[MAX];
int primeList[1000000];
int c=1;

int isPrime(int num)
{
    int yes = 1;
    if(num%2==0)return 0;
    for(int i=3; i<=sqrt((double)num); i=i+2)
    {
        if(num%i==0)
        {
            yes = 0;
            break;
        }
    }
    return yes;
}

void sieve_prime()
{
    int i,j,k,l,m;


    for(i=2; i<=MAX; i++)prime[i]=1;
    k=2;
    for(m=2; m<=sqrt((double)MAX); m++)
    {
        for(j=k+k; j<=MAX; j=j+k)
        {
            prime[j]=0;
        }
        k++;
        for(; !prime[k]; k++);
    }


    for(int n=2; n<MAX; n++)
    {
        if(prime[n])primeList[c++]  = n;
    }
}

int getDigitSum(int num)
{
    int sum = 0;
    while(num)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int getPrimeFactorSum(int num)
{
    int sum=0,n=1;
    for(int i= 1; i<c; i++)
    {
        if(num==1)break;
        if(isPrime(num)==1)
        {
            sum += getDigitSum(num);
            break;
        }
        while(num%primeList[i]==0)
        {
            sum += getDigitSum(primeList[i]);
            num /= primeList[i];

        }
    }

    return sum;
}
int getSmithNumber(int num)
{

    int i;
    for(i=num+1;; i++)
    {
        if(i<MAX)
        {
            if(prime[i]==0)
            {
                if(getDigitSum(i)==getPrimeFactorSum(i))break;
            }
        }
        else
        {
            if(isPrime(i)==0)
            {
                if(getDigitSum(i)==getPrimeFactorSum(i))break;
            }
        }
    }

    return i;
}
int main()
{
    sieve_prime();

    int testCase;
    scanf("%d",&testCase);
    for(int i=1; i<=testCase; i++)
    {

        int num;
        scanf("%d",&num);
        printf("%d\n",getSmithNumber(num));
    }

    return 0;
}
