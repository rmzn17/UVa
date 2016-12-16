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
    int T,i,j,k,Index;
    char input[2005], tmp[10],output[2005];
    //freopen("in.txt","r",stdin);

    scanf("%d\n",&T);

    for(i = 1; i <= T; i++)
    {
        if(i>1)
            printf("\n");
        gets(input);
        Index = k = 0;
        memset(tmp,'\0',sizeof(tmp));

        cout << "Message #" << i << endl;

        for(j = 0; input[j]; j++)
        {
            if(input[j] != ' ' )
            {
                //Index++;
                //continue;
                tmp[Index++] = input[j];
            }


            if(input[j] == ' ' || input[j+1]=='\0')
            {
                if(strcmp(tmp,".-" ) == 0)
                    output[k++] = 'A';
                else if(strcmp(tmp,"-..." ) == 0)
                    output[k++] = 'B';
                else if(strcmp(tmp,"-.-." ) == 0)
                    output[k++] = 'C';
                else if(strcmp(tmp,"-.." ) == 0)
                    output[k++] = 'D';
                else if(strcmp(tmp,"." ) == 0)
                    output[k++] = 'E';
                else if(strcmp(tmp,"..-." ) == 0)
                    output[k++] = 'F';
                else if(strcmp(tmp,"--." ) == 0)
                    output[k++] = 'G';
                else if(strcmp(tmp,"...." ) == 0)
                    output[k++] = 'H';
                else if(strcmp(tmp,".." ) == 0)
                    output[k++] = 'I';
                else if(strcmp(tmp,".---" ) == 0)
                    output[k++] = 'J';
                else if(strcmp(tmp,"-.-" ) == 0)
                    output[k++] = 'K';
                else if(strcmp(tmp,".-.." ) == 0)
                    output[k++] = 'L';
                else if(strcmp(tmp,"--" ) == 0)
                    output[k++] = 'M';
                else if(strcmp(tmp,"-." ) == 0)
                    output[k++] = 'N';
                else if(strcmp(tmp,"---" ) == 0)
                    output[k++] = 'O';
                else if(strcmp(tmp,".--." ) == 0)
                    output[k++] = 'P';
                else if(strcmp(tmp,"--.-" ) == 0)
                    output[k++] = 'Q';
                else if(strcmp(tmp,".-." ) == 0)
                    output[k++] = 'R';
                else if(strcmp(tmp,"..." ) == 0)
                    output[k++] = 'S';
                else if(strcmp(tmp,"-" ) == 0)
                    output[k++] = 'T';
                else if(strcmp(tmp,"..-" ) == 0)
                    output[k++] = 'U';
                else if(strcmp(tmp,"...-" ) == 0)
                    output[k++] = 'V';
                else if(strcmp(tmp,".--" ) == 0)
                    output[k++] = 'W';
                else if(strcmp(tmp,"-..-" ) == 0)
                    output[k++] = 'X';
                else if(strcmp(tmp,"-.--" ) == 0)
                    output[k++] = 'Y';
                else if(strcmp(tmp,"--.." ) == 0)
                    output[k++] = 'Z';
                else if(strcmp(tmp,"-----" ) == 0)
                    output[k++] = '0';
                else if(strcmp(tmp,".----" ) == 0)
                    output[k++] = '1';
                else if(strcmp(tmp,"..---" ) == 0)
                    output[k++] = '2';
                else if(strcmp(tmp,"...--" ) == 0)
                    output[k++] = '3';
                else if(strcmp(tmp,"....-" ) == 0)
                    output[k++] = '4';
                else if(strcmp(tmp,"....." ) == 0)
                    output[k++] = '5';
                else if(strcmp(tmp,"-...." ) == 0)
                    output[k++] = '6';
                else if(strcmp(tmp,"--..." ) == 0)
                    output[k++] = '7';
                else if(strcmp(tmp,"---.." ) == 0)
                    output[k++] = '8';
                else if(strcmp(tmp,"----." ) == 0)
                    output[k++] = '9';
                else if(strcmp(tmp,".-.-.-" ) == 0)
                    output[k++] = '.';
                else if(strcmp(tmp,"--..--" ) == 0)
                    output[k++] = ',';

                else if(strcmp(tmp,"..--.." ) == 0)
                    output[k++] = '?';
                else if(strcmp(tmp,".----." ) == 0)
                    output[k++] = '\'';
                else if(strcmp(tmp,"-.-.--" ) == 0)
                    output[k++] = '!';
                else if(strcmp(tmp,"-..-." ) == 0)
                    output[k++] = '/';
                else if(strcmp(tmp,"-.--." ) == 0)
                    output[k++] = '(';
                else if(strcmp(tmp,"-.--.-" ) == 0)
                    output[k++] = ')';
                else if(strcmp(tmp,".-..." ) == 0)
                    output[k++] = '&';
                else if(strcmp(tmp,"---..." ) == 0)
                    output[k++] = ':';
                else if(strcmp(tmp,"-.-.-." ) == 0)
                    output[k++] = ';';
                else if(strcmp(tmp,"-...-" ) == 0)
                    output[k++] = '=';
                else if(strcmp(tmp,".-.-." ) == 0)
                    output[k++] = '+';
                else if(strcmp(tmp,"-....-" ) == 0)
                    output[k++] = '-';
                else if(strcmp(tmp,"..--.-" ) == 0)
                    output[k++] = '_';
                else if(strcmp(tmp,".-..-." ) == 0)
                    output[k++] = char(34);
                else if(strcmp(tmp,".--.-." ) == 0)
                    output[k++] = '@';

                if(input[j+1] == ' ' )
                {
                    output[k++] = ' ';
                    j++;
                }
                memset(tmp,'\0',sizeof(tmp));
                Index = 0;
            }
        }
        output[k] = '\0';
        printf("%s\n",output);

    }
    return 0;
}
