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
    int tc,Case=1;

    char ch;
    cin>>tc;
    getchar();
    while(tc--)
    {
        double p=0,u=0,i=0;
        while ((ch = getchar()) != '\n')
        {
            if(ch=='P')
            {
                if ((ch = getchar()) == '=')
                {
                    scanf("%lf%c",&p,&ch);
                    if(ch=='m')
                        p=p*0.001;
                    else if(ch=='k')
                        p=p*1000;
                    else if(ch=='M')
                        p=p*1000000;

                }
            }
            else if(ch=='U')
            {
                if ((ch = getchar()) == '=')
                {
                    scanf("%lf%c",&u,&ch);
                    if(ch=='m')
                        u=u*0.001;
                    else if(ch=='k')
                        u=u*1000;
                    else if(ch=='M')
                        u=u*1000000;

                }
            }
            else if(ch=='I')
            {
                if ((ch = getchar()) == '=')
                {
                    scanf("%lf%c",&i,&ch);
                    if(ch=='m')
                        i=i*0.001;
                    else if(ch=='k')
                        i=i*1000;
                    else if(ch=='M')
                        i=i*1000000;

                }
            }
        }
        printf("Problem #%d\n", Case++);
        if (u!= 0 && i!=0)
            printf("P=%.02lfW\n\n", u*i);
        else if (p != 0 && i!= 0)
            printf("U=%.02lfV\n\n", p / i);
        else if (u != 0 && p != 0)
            printf("I=%.02lfA\n\n", p / u);
    }
    return 0;

}
