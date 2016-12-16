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
    int tc;
    char input[100];

    scanf("%d",&tc);
    getchar();
    for(int testcase=1; testcase<=tc; testcase++)
    {

        int count=0;
        double dijit1 = 0;
        double digit2 = 0;
        int integer=0;
        int decimal = 0;
        gets(input);
        int len=strlen(input);
        for(int i = 0; i<len; i++)
        {

            if(input[i]>='0' && input[i]<='9')
                dijit1 = dijit1*10+input[i]-48;
            else
                break;
            count++;
        }
        dijit1 = dijit1*0.5;
        integer = (int)dijit1;
        double temp= dijit1 - (int)dijit1;
        for(int j = count; j<len; j++)
        {
            if(input[j]>='0' && input[j]<='9')
            {
                digit2 = input[j]-48;
                break;
            }


        }
        digit2*=0.05;
        temp = temp+digit2;

        while(temp - (int)temp>1e-3)
        {
            temp*=10;
        }
        decimal = (int)temp;
        if(decimal)
            printf("Case %d: %d.%d\n",testcase,integer,decimal);
        else
            printf("Case %d: %d\n",testcase,integer);
    }

    return 0;
}
