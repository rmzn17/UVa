#include<stdio.h>
#include<math.h>
#include<string.h>

long long int len;

long long int Skew_binary(char number[])
{

    long long int sum=0,i;
    long long int print=len;
    for(i=0; i<len; i++)
    {
        long  long int digit=number[i]-'0';
        sum+=digit*(pow(2,print)-1);
        print--;
    }

    return sum;
}


int main()
{
    char number[1000];
    while(gets(number))
    {
        len=strlen(number);
        if(len==1&&number[0]=='0')
            break;
        printf("%lld\n",Skew_binary(number));
    }
}
