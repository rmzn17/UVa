#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
    int i,j,newline=0;
    char year[100010];
    while(gets(year))
    {
        if(newline>0)
            printf("\n");
        newline++;
        int len=strlen(year);
        int divisible_4=0;
        int divisible_15=0;
        int divisible_55=0;
        int divisible_100=0;
        int divisible_400=0;
        int ch=0;
        while(len--)
        {
            divisible_4=(divisible_4*10+year[ch]-'0')%4;
            divisible_55=(divisible_55*10+year[ch]-'0')%55;
            divisible_15=(divisible_15*10+year[ch]-'0')%15;
            divisible_100=(divisible_100*10+year[ch]-'0')%100;
            divisible_400=(divisible_400*10+year[ch]-'0')%400;
            ch++;
        }

        if ((!divisible_4&&divisible_100) ||!divisible_400)
        {
            printf("This is leap year.\n");


            if (!divisible_15)
                printf("This is huluculu festival year.\n");
            if (!divisible_55)
                printf("This is bulukulu festival year.\n");


        }
        else
        {
            if (!divisible_15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
