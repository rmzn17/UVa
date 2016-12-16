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


long humble[5890];
//vector<int>humble;
void genHumble()
{
    int a,b,c,d,i;
    int w,x,y,z;

    humble[1]=a=b=c=d=1;

    for(i=2; i<5890; i++)
    {
        w=2*humble[a];
        x=3*humble[b];
        y=5*humble[c];
        z=7*humble[d];

        humble[i]=min(min(w,x),min(y,z));

        if(humble[i]==w)a++;
        if(humble[i]==x)b++;
        if(humble[i]==y)c++;
        if(humble[i]==z)d++;
    }
}

int main()
{
    int n;


    while(scanf("%d",&n)==1)
    {
        genHumble();

        if(n==0)
            break;

        if((n%100)/10==1)
        {
            printf("The %dth humble number is %d.\n",n,humble[n]);
            continue;
        }

        switch(n%10)
        {
        case 1:
            printf("The %dst humble number is %d.\n",n,humble[n]);
            break;
        case 2:
            printf("The %dnd humble number is %d.\n",n,humble[n]);
            break;
        case 3:
            printf("The %drd humble number is %d.\n",n,humble[n]);
            break;
        default:
            printf("The %dth humble number is %d.\n",n,humble[n]);
        }
    }
    return 0;
}

