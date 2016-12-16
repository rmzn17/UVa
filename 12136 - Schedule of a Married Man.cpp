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
    int testcase, cases = 1;
    scanf("%d", &testcase);
    while(testcase--)
    {

        int sh, sm, eh, em;
        scanf("%d:%d %d:%d", &sh, &sm, &eh, &em);
        sh = sh*60 + sm, eh = eh*60 + em;
        int ah, am, bh, bm;
        scanf("%d:%d %d:%d", &ah, &am, &bh, &bm);
        ah = ah*60 + am, bh = bh*60 + bm;
        printf("Case %d: ", cases);
        if(eh < ah || sh > bh)
            printf("Hits Meeting\n");
        else
            printf("Mrs Meeting\n");
        cases++;
    }
    return 0;
}

