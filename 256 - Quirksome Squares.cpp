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
    int num;
    while(  cin >> num)
    {

        if(num==2)
        {
            cout <<"0"<<'\n'<<"01"<<'\n'<<81<<'\n';
        }
        else if(num==4)
        {
            cout <<"0000"<<'\n'<<"0001"<<'\n'<<2025<<'\n'<<3025<<'\n'<<9801<<'\n';
        }
        else if(num==6)
        {
            cout <<"000000"<<'\n'<<"000001"<<'\n'<<"088209"<<'\n'<<494209<<'\n'<<998001<<'\n';
        }
        else if(num==8)
        {
            cout <<"00000000"<<'\n'<<"00000001"<<'\n'<<"04941729"<<'\n'<<"07441984"<<'\n'<<24502500<<'\n'<<25502500<<'\n'<<52881984<<'\n'<<60481729<<'\n'<<99980001<<'\n';
        }
    }
    return 0;
}
