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
    string row1,row2,row3;
    cin>>tc;
    getchar();
    while(tc--)
    {
        getline(cin,row1);
        getline(cin,row2);
        getline(cin,row3);

        long int countO=count(row1.begin(),row1.end(),'O')+count(row2.begin(),row2.end(),'O')+count(row3.begin(),row3.end(),'O');
        long int countX=count(row1.begin(),row1.end(),'X')+count(row2.begin(),row2.end(),'X')+count(row3.begin(),row3.end(),'X');

        //cout<<countO<<countX<<endl;

        bool winO=false;
        if((row1[0]=='O'&&row1[1]=='O'&&row1[2]=='O')||(row2[0]=='O'&&row2[1]=='O'&&row2[2]=='O')||(row3[0]=='O'&&row3[1]=='O'&&row3[2]=='O'))
        {
            winO=true;
        }

//        if (count(row1.begin(), row1.end(), 'O')==3||count(row2.begin(), row2.end(), 'O')==3||count(row3.begin(), row3.end(), 'O')==3)
//        {
//            winO=true;
//        }
        if((row1[0]=='O'&&row2[0]=='O'&&row3[0]=='O')||(row1[1]=='O'&&row2[1]=='O'&&row3[1]=='O')||(row1[2]=='O'&&row2[2]=='O'&&row3[2]=='O'))
        {
            winO=true;
        }
        if((row1[0]=='O'&&row2[1]=='O'&&row3[2]=='O')||(row1[2]=='O'&&row2[1]=='O'&&row3[0]=='O'))
        {
            winO=true;
        }

        bool winX=false;
        if((row1[0]=='X'&&row1[1]=='X'&&row1[2]=='X')||(row2[0]=='X'&&row2[1]=='X'&&row2[2]=='X')||(row3[0]=='X'&&row3[1]=='X'&&row3[2]=='X'))
        {
            winX=true;
        }
//        if (count(row1.begin(), row1.end(), 'X')==3||count(row2.begin(), row2.end(), 'X')==3||count(row3.begin(), row3.end(), 'X')==3)
//        {
//            winX=true;
//        }
        if((row1[0]=='X'&&row2[0]=='X'&&row3[0]=='X')||(row1[1]=='X'&&row2[1]=='X'&&row3[1]=='X')||(row1[2]=='X'&&row2[2]=='X'&&row3[2]=='X'))
        {
            winX=true;
        }
        if((row1[0]=='X'&&row2[1]=='X'&&row3[2]=='X')||(row1[2]=='X'&&row2[1]=='X'&&row3[0]=='X'))
        {
            winX=true;
        }

        if(countX>countO+1)
        {
            cout<<"no\n";
        }
        else if (countO>countX)
        {
            cout<<"no\n";
        }
        else if(winX==true && winO==true)
        {
            cout<<"no\n";
        }
        else if(winO==true&&countO<countX)
        {
            cout<<"no\n";
        }
        else if(winX==true&&countO>=countX)
        {
            cout<<"no\n";
        }
        else
            cout<<"yes\n";

    }
    return 0;
}
