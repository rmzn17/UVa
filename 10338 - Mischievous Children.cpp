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


long long int fact(long long int n)
{
    if(n<=1)
        return 1;
    else
        return (n*fact(n-1));
}

int main()
{
    long long int test_case,arr[100];
    char str[1000];
    scanf("%lld",&test_case);
    getchar();
    for(long long int p=1; p<=test_case; p++)
    {
        memset(arr,0,sizeof(arr));

        gets(str);
        long long int sum=1;
        long long int len=strlen(str);

        long long int b=fact(len);
        for(long long int i=0; i<len; i++)
        {
            char a=str[i];
            arr[a]++;

        }
        for(long long int i=65; i<=90; i++)
        {
            if(arr[i]>=2)
            {
                long long int c=fact(arr[i]);
                sum*=c;
            }
        }
        long long int result=b/sum;
        printf("Data set %lld: %lld\n",p,result);
        memset(str,'\0',sizeof(str));
    }
    return 0;
}

