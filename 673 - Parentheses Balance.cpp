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
    int tc,i;

    scanf("%d",&tc);
    getchar();
    for(i=1; i<=tc; i++)
    {

        stack<char>ch;
        char str[150];
        gets(str);
        int len=strlen(str);
        for(int j=0; j<len; j++)
        {
            if (str[j] == '(' || str[j] == '[')
            {
                ch.push(str[j]);
            }
            else if (str[j] == ')')
            {
                if(ch.empty()||ch.top()!='(')
                {
                    ch.push(' ');
                    break;
                }
                ch.pop();

            }
            else if (str[j] == ']')
            {
                if(ch.empty()||ch.top()!='[')
                {
                    ch.push(' ');
                    break;
                }
                ch.pop();
            }
        }
        if(ch.empty())
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
