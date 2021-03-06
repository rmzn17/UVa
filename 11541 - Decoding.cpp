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
    int tc,i,j,cs=1;
    char input[500];
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        wt.clear();

        gets(input);

        int len=strlen(input);
        printf("Case %d: ",cs++);
        for(int i=0; i<len; i++)
        {
            char ch;

            if(input[i]>='A'&&input[i]<='Z')
            {
                ch=input[i];
                printf("%c",ch);
            }
            else if(input[i]>='0'&&input[i]<='9')
            {
                int digit=0;
                while(input[i]>='0'&&input[i]<='9')
                {
                    digit=digit*10+input[i]-'0';
                    i++;
                }
                i--;

                for(int j=0; j<digit-1; j++)
                    printf("%c",ch);


            }


        }
        printf("\n");
    }
    return 0;
}
