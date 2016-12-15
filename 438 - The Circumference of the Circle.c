#include<stdio.h>
#include<math.h>

double distance(double x1,double y1,double x2,double y2)
{

    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

}
int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,r,circumference,pi=3.141592653589793;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a=distance(x1,y1,x2,y2);

        b=distance(x1,y1,x3,y3);

        c=distance(x3,y3,x2,y2);

        r=(a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));

        circumference=2*r*pi;
        printf("%.2lf\n",circumference);
    }
    return 0;
}

