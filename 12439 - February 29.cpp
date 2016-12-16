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

bool is_leap_year(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        return true;

    return false;
}


int main()
{
    int i,j,n,tc,day1,day2,year1,year2,leap_day,cs=1;
    char date1[31],koma1,koma2;
    char date2[31],month1[12],month2[12];

    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        leap_day=0;
        gets(date1);
        gets(date2);
        sscanf(date1,"%s %d%c %d",month1,&day1,&koma1,&year1);
        sscanf(date2,"%s %d%c %d",month2,&day2,&koma2,&year2);


        int leap_day=(year2/4-year2/100+year2/400)-(year1/4-year1/100+year1/400);

        if(is_leap_year(year1))
            if(strcmp(month1,"January")==0 || strcmp(month1,"February")==0)
                leap_day++;

        if(is_leap_year(year2))
            if(strcmp(month2,"January")==0 || (strcmp(month2,"February")==0 && day2<29))
                leap_day--;


        printf("Case %d: %d\n",cs,leap_day);
        cs++;
    }
    return 0;
}


