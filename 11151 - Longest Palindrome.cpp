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
    int frequency[1000];
    int tc;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        string input,beg="",mid="",end="",result="";
        memset(frequency,0,sizeof(frequency));

        getline(cin,input);
        int inputsize=input.size();

        for(int i=0; i<inputsize; i++)
            frequency[input[i]]++;

        for(char ch = 'A'; ch <= 'Z'; ch++)
        {
            if(frequency[ch]%2!=0)
            {
                mid=ch;
                frequency[ch--]--;
            }

            else
            {
                for(int i=0; i<frequency[ch]/2; i++)
                    beg.push_back(ch);
            }
        }
        end=beg;
        reverse(end.begin(), end.end());
        result=beg+mid+end;
        int sz= result.size();
        cout <<sz<<endl;


    }
    return 0;
}

