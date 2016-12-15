#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,z1,z2,p1,p2,fourpoint1,fourpoint2;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&x2,&y1,&y2,&z1,&z2,&p1,&p2)==8)
    {
        if(x1==y1 && x2==y2)
        {
            fourpoint1=z1+p1-x1;
            fourpoint2=z2+p2-x2;
        }
        else if(x1==z1 && x2==z2)
        {
            fourpoint1=y1+p1-x1;
            fourpoint2=y2+p2-x2;
        }
         else if(x1==p1 && x2==p2)
        {
            fourpoint1=z1+y1-x1;
            fourpoint2=z2+y2-x2;
        }
         else if(y1==z1 && y2==z2)
        {
            fourpoint1=x1+p1-y1;
            fourpoint2=x2+p2-y2;
        }
         if(y1==p1 && y2==p2)
        {
            fourpoint1=x1+z1-y1;
            fourpoint2=x2+z2-y2;
        }
         else if(z1==p1 && z2==p2)
        {
            fourpoint1=y1+x1-z1;
            fourpoint2=y2+x2-z2;
        }
        printf("%.3lf %.3lf\n",fourpoint1,fourpoint2);
    }
    return 0;
}

