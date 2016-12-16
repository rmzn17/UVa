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
    char number1[10000],number2[1000],add[1000];
    char input[10000];
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        gets(input);

        sscanf(input,"%s %s",number1,number2);
        int len1 = strlen(number1);
        int len2 = strlen(number2);

        if(len1>len2)
        {
            int i;
            for(i=len2 ; i<len1; i++)
            {
                number2[i]='0';
            }
            number2[i]='\0';
        }
        else if(len2>len1)
        {
            int j;
            for(j=len1; j<len2; j++)
            {
                number1[j]='0';
            }
            number1[j]='\0';
        }
        len1 = strlen(number1);
        int carry=0;
        int sum=0;
        int j;
        for(j=0; j<len1; j++)
        {
            int n= number1[j]-48;
            int m=number2[j]-48;
            int sum = n+m +carry;
            if(sum<=9)
            {
                add[j] = sum+48;
                carry = 0;

            }
            else if (sum>9)
            {
                sum=sum%10;
                add[j]=sum+48;
                carry = 1;
            }
        }
        if(carry == 1)
        {
            add[j]= carry+48;
            j++;
        }
        add[j]='\0';
        len1 = j;
        int k;
        for(k=0; k<len1; k++)
        {
            if(add[k]!='0')
                break;
        }

        for(j=k; j<len1; j++)
        {
            printf("%c",add[j]);
        }
        printf("\n");
    }
    return 0;
}
