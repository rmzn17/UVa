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
    string first,second,s2,s3,s4,s5;
    int tc;
    cin>>tc;
    getchar();
    while(tc--)
    {
        s2="";
        s3="";
        s4="";
        s5="";
        getline(cin,first);
        getline(cin,second);
        int flen=first.size();
        bool found=false;
        int count=0;
        for(int i=0; i<flen; i++)
        {
            if(first[i]=='<')
            {
                found=true;
                count++;
                continue;
            }
            if(first[i]=='>')
            {
                found=false;
                continue;

            }
            if(found==true)
            {
                if(count==1)
                {
                    s2+=first[i];
                }
                else
                    s4+=first[i];
            }
        }


        bool fnd=false;
        int cnt=0;
        for(int i=0; i<flen; i++)
        {
            if(first[i]=='>')
            {
                fnd=true;
                cnt++;
                continue;
            }
            if(first[i]=='<')
            {
                fnd=false;
                continue;

            }
            if(fnd==true)
            {
                if(cnt==1)
                {
                    s3+=first[i];
                }
                else
                    s5+=first[i];
            }
        }

        for(int i=0; i<flen; i++)
        {
            if(first[i]=='<'||first[i]=='>')
            {
                continue;
            }
            else
                printf("%c",first[i]);
        }
        printf("\n");
        int slen=second.size();

        for(int i=0; i<slen; i++)
        {
            if(second[i]=='.')
            {
                cout<<s4<<s3<<s2<<s5;
                break;
            }
            else
                printf("%c",second[i]);
        }
        printf("\n");
    }
    return 0;
}
