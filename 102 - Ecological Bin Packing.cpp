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
    long int i,blue[1005],green[1005],clear[1005],small;
    vector<int>store;

    while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&blue[1],&green[1],&clear[1],&blue[2],&green[2],&clear[2],&blue[3],&green[3],&clear[3])==9)
    {
        store.push_back(blue[2]+blue[3]+green[1]+green[2]+clear[1]+clear[3]);
        store.push_back(blue[2]+blue[3]+green[1]+green[3]+clear[1]+clear[2]);
        store.push_back(blue[1]+blue[3]+green[1]+green[2]+clear[2]+clear[3]);
        store.push_back(blue[1]+blue[2]+green[1]+green[3]+clear[2]+clear[3]);
        store.push_back(blue[1]+blue[3]+green[2]+green[3]+clear[1]+clear[2]);
        store.push_back(blue[1]+blue[2]+green[2]+green[3]+clear[1]+clear[3]);

        small=store[0];
        for(i=1; i<6; i++)
        {
            if(store[i]<small)
                small=store[i];
        }
        for(i=0; i<6; i++)
        {
            if(store[i]==small)
            {
                if(i==0)
                    printf("BCG %ld\n",small);
                else if(i==1)
                    printf("BGC %ld\n",small);
                else if(i==2)
                    printf("CBG %ld\n",small);
                else if(i==3)
                    printf("CGB %ld\n",small);
                else if(i==4)
                    printf("GBC %ld\n",small);
                else
                    printf("GCB %ld\n",small);
                break;
            }
        }
        store.clear();
    }
    return 0;
}
