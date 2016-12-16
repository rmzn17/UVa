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


int main()
{
    int max, len, i, j, freq[130], cnt, k = 0;
    char str[1001];
    while(gets(str))
    {
        if(k!=0)
            printf("\n");
        len = strlen(str);
        for(i=32; i<=127; i++)
        {
            cnt = 0;
            for(j=0; j<len; j++)
                if(str[j]==i)
                    cnt++;
            freq[i] = cnt;
        }
        max = 0;
        for(i=32; i<=127; i++)
            if(freq[i]>max)
                max = freq[i];
        for(j=1; j<=max; j++)
            for(i=127; i>=32; i--)
                if(freq[i]==j)
                    printf("%d %d\n",i,j);
        k = 1;
    }
    return 0;
}
