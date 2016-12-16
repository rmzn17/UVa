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
    string out,input,temp;
    int tc,cs=1;
    cin>>tc;
    getchar();
    while(tc--)
    {
        string temp1="";
        temp="";
        getline(cin,out);
        getline(cin,input);
        int len1=out.size();
        int len2=input.size();

        if(out==input)
        {
            printf("Case %d: Yes\n",cs++);
        }

        else
        {
            int d=0;
            for(int i=0; i<len1; i++)
            {
                if(out[i]==' ')
                    continue;
                else
                    temp+=out[i];
                d++;
            }
            int x=0;

            for(int i=0; i<len2; i++)
            {
                if(input[i]==' ')
                    continue;
                else
                    temp1+=input[i];
                x++;
            }

            temp1[x]='\0';
            if(temp==temp1)
            {
                  printf("Case %d: Output Format Error\n",cs++);

            }
            else
            {
                printf("Case %d: Wrong Answer\n",cs++);

            }
        }

    }
return 0;
}
