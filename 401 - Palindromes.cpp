#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstring>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,j;

    string input,str1,str2;
    char reverses[1000];

    memset(reverses,NULL,sizeof(reverses));
    reverses['A']='A';
    reverses['E']='3';
    reverses['H']='H';
    reverses['I']='I';
    reverses['J']='L';
    reverses['L']='J';
    reverses['M']='M';
    reverses['O']='O';
    reverses['S']='2';
    reverses['T']='T';
    reverses['U']='U';
    reverses['V']='V';
    reverses['W']='W';
    reverses['X']='X';
    reverses['Y']='Y';
    reverses['Z']='5';
    reverses['1']='1';
    reverses['2']='S';
    reverses['3']='E';
    reverses['5']='Z';
    reverses['8']='8';

    while(cin>>input)
    {
        str1="";
        str2="";
        int len=input.size();
        for(i=len-1; i>=0; i--)
        {
            str1=str1+input[i];
            str2=str2+reverses[input[i]];
        }
        if(str1==input&&str2==input)
            cout<<input<<" -- is a mirrored palindrome."<<endl<<endl;
        else if(str1==input&&str2!=input)
            cout<<input<<" -- is a regular palindrome."<<endl<<endl;
        else if(str1!=input&&str2==input)
            cout<<input<<" -- is a mirrored string."<<endl<<endl;
        else
            cout<<input<<" -- is not a palindrome."<<endl<<endl;
    }
}
