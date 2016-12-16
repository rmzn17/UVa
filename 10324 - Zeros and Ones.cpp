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


vector<int>wt;

int main()
{
    char input[1000011];

    long  int i,j,n,cs=1;
    while(scanf("%s",input)==1)
    {
        wait();
        scanf("%ld",&n);
        //int len=strlen(input);
        printf("Case %ld:\n",cs++);
        for(int s=1; s<=n; s++)
        {

            scanf("%ld%ld",&i,&j);

            if(i==j)
            {
                printf("Yes\n");
                continue;
            }
            if(j<i)
            {
                int temp=j;
                j=i;
                i=temp;
            }
            int flag=1;

            for(int x=i+1; x<=j; x++)
            {
                if(input[x]==input[x-1])
                    continue;
                else
                {
                    flag=0;
                    break;
                }

            }
            if(flag==0)
                printf("No\n");
            else
                printf("Yes\n");


        }
        memset(input,'\0',sizeof(input));
    }
    return 0;
}
