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


bool is_prime(long int n)
{
    if(n<=1)
        return false;
    for(long int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;

    }
    return true;
}

int main()
{
    char input[100000];
    long int i,j,n,len;
    int tc,cs=1;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {


        map<char,long int>mp;
        set<char>temp;
        // char temp[100000];

        gets(input);
        len=strlen(input);
        for(i=0,j=0; i<len; i++)
        {
            if(!mp[input[i]])
            {

                temp.insert(input[i]);

            }
            mp[input[i]]++;

        }

        int mapsize=mp.size();

        int cnt=0;
        int baal=0;
        set< char > :: iterator it;
        for(it = temp.begin(); it != temp.end(); it++)
        {
            long int value=mp[*it];

            if(is_prime(value))
            {
                if(baal==0)
                {
                    printf("Case %d: ",cs);
                    baal++;
                }
                printf("%c",*it);
                cnt=1;
            }

        }
        if(cnt==0)
            printf("Case %d: empty",cs);
        printf("\n");

        cs++;
    }
    return 0;
}
