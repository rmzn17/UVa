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


int non_zero_digit[max_number+5];

void factorial()
{
    non_zero_digit[0]=1;
    non_zero_digit[1]=1;
    int fact=1;
    for(int digit=2; digit<=max_number; digit++)
    {
        fact=(fact*digit);
        if(fact%10==0)
        {
            while(fact%10==0)
                fact=fact/10;
        }
        fact=fact%100000;
        int temp=fact%10;
        non_zero_digit[digit]=temp;
    }

}

int main()
{
    factorial();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%5d -> %d\n",n,non_zero_digit[n]);

    }
}
