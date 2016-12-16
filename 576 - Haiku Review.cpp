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
    char input[10000];


    while(gets(input))
    {
        if(strcmp(input,"e/o/i")==0)
            break;
        map<int,int>value;

        int len=strlen(input);
        int i,j,k;
        int slash=0;
        for(i=0; i<len; i++)
        {
            if(input[i]=='/')
                slash++;
            else if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='y')
            {
                if(input[i-1]!='a'&&input[i-1]!='e'&&input[i-1]!='i'&&input[i-1]!='o'&&input[i-1]!='u'&&input[i-1]!='y')
                    value[slash]++;

            }

        }
        int line_one=value[0];
        int line_two=value[1];
        int line_three=value[2];
        if(line_one!=5)printf("1\n");
        else if(line_two!=7)printf("2\n");
        else if(line_three!=5)printf("3\n");
        else printf("Y\n");


    }
    return 0;
}

