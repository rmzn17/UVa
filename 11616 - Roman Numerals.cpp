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


string input;

void dec_to_roman(int e)
{
    int a,b,c,d;
    a = (e/1000)*1000;
    b = ((e/100)%10)*100;
    c = ((e/10)%10)*10;
    d = ((e/1)%10)*1;

    if (a ==1000)
        printf("M");
    else if (a ==2000)
        printf("MM");
    else if (a ==3000)
        printf("MMM");

    if (b == 100)
        printf("C");
    else if (b == 200)
        printf("CC");
    else if (b == 300)
        printf("CCC");
    else if (b == 400)
        printf("CD");
    else if (b ==500)
        printf("D");
    else if (b == 600)
        printf("DC");
    else if (b == 700)
        printf("DCC");
    else if (b ==800)
        printf("DCCC");
    else if (b == 900)
        printf("CM");

    if (c == 10)
        printf("X");
    else if (c == 20)
        printf("XX");
    else if (c == 30)
        printf("XXX");
    else if (c == 40)
        printf("XL");
    else if (c ==50)
        printf("L");
    else if (c == 60)
        printf("LX");
    else if (c == 70)
        printf("LXX");
    else if (c ==80)
        printf("LXXX");
    else if (c == 90)
        printf("XC");

    if (d == 1)
        printf("I");
    else if (d == 2)
        printf("II");
    else if (d == 3)
        printf("III");
    else if (d == 4)
        printf("IV");
    else if (d ==5)
        printf("V");
    else if (d == 6)
        printf("VI");
    else if (d == 7)
        printf("VII");
    else if (d ==8)
        printf("VIII");
    else if (d == 9)
        printf("IX");

}



int rom_to_dec()
{
    int sum = 0;

    int i;
    int length=input.size();

    int previous = 1000;

    for(i = 0; i < length; i++)
    {
        switch(input[i])
        {
        case 'M':
            sum += 1000;
            if(previous < 1000)
            {
                sum -= 2 * previous;
            }
            previous = 1000;
            break;
        case 'D':
            sum += 500;
            if(previous < 500)
            {
                sum -= 2 * previous;
            }
            previous = 500;
            break;
        case 'C':
            sum += 100;
            if(previous < 100)
            {
                sum -= 2 * previous;
            }
            previous = 100;
            break;
        case 'L':
            sum += 50;
            if(previous < 50)
            {
                sum -= 2 * previous;
            }
            previous = 50;
            break;
        case 'X':
            sum += 10;
            if(previous < 10)
            {
                sum -= 2 * previous;
            }
            previous = 10;
            break;
        case 'V':
            sum += 5;
            if(previous < 5)
            {
                sum -= 2 * previous;
            }
            previous = 5;
            break;
        case 'I':
            sum += 1;
            if(previous < 1)
            {
                sum -= 2 * previous;
            }
            previous = 1;
            break;
        }

    }
    return sum;
}

int main()
{
    while(cin>>input)
    {
        if(input[0]>='0'&&input[0]<='9')
        {
            int b=atoi(input.c_str());
            dec_to_roman(b);
            printf("\n");
        }
        else
        {
            long int ret=rom_to_dec();
            printf("%ld\n",ret);

        }

    }
    return 0;
}
