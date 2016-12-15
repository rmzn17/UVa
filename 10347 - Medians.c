#include<stdio.h>
#include<math.h>

int main()
{

    double p,area,a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        p=(a+b+c)/2;
        area=4.0/3.0*sqrt(p*(p-a)*(p-b)*(p-c));
        if(area>0)
            printf("%.3lf\n",area);
        else
            printf("%.3lf",-1.0);

    }
    return 0;
}
