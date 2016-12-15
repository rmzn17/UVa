#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>

using namespace std;

int main()
{
    int n,matrix[100][1000],i,j,row,col;
    while(scanf("%d",&n)==1)
    {
        int cnc=0,cnr=0;
        int ct=0;
        row=0;
        col=0;
        int sum1=0,sum2;

        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                scanf("%d",&matrix[i][j]);
        }

        for(i=1; i<=n; i++)
        {
            sum1=0;
            for(j=1; j<=n; j++)
            {
                sum1=sum1+matrix[i][j];
            }
            if(sum1%2!=0)
            {
                row=i;
                cnr++;
            }

        }
        for(i=1; i<=n; i++)
        {
            sum2=0;
            for(j=1; j<=n; j++)
            {
                sum2=sum2+matrix[j][i];
            }
            if(sum2%2!=0)
            {
                col=i;
                cnc++;
            }

        }

        if(cnc==0&&cnr==0)
            printf("OK\n");
        else if(cnc==1||cnr==1)
            printf("Change bit (%d,%d)\n",row,col);
        else
            printf("Corrupt\n");


    }

    return 0;
}




