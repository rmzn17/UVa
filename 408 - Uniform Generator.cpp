#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
      int number,i,step,mod,location;

    vector<int>digit;

    while(scanf("%d%d",&step,&mod)==2)
    {
        location=0;
        int seed=0;
        int previous=(seed+step)%mod;
        digit.push_back(previous);
        i=1;
        while(1)
        {
            digit.push_back((digit[i-1]+step)%mod);
            if(previous==digit[i])
            {
                location=i;
                break;
            }
            i++;

        }

        if(mod==location)
             printf("%10d%10d    Good Choice\n\n",step,mod);
        else
             printf("%10d%10d    Bad Choice\n\n",step,mod);
        digit.clear();
    }
    return 0;
}



