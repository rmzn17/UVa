#include<stdio.h>
#include<iostream>
#include <iomanip>
using namespace std;

long double factorial(long double n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));

}

int main()
{
    long double n,m;
    while(cin>>n>>m)
    {
        if(n==0&m==0)
            break;

         cout << n << " things taken " << m << " at a time is " << fixed << setprecision(0) << (factorial(n))/(factorial(n-m)*factorial(m)) << " exactly." << endl;
    }
    return 0;
}

