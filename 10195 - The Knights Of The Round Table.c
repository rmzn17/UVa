#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,s,r;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if((a+b+c)==0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            s=(a+b+c)/2;
            r=sqrt(((s-a)*(s-b)*(s-c))/s);

            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
