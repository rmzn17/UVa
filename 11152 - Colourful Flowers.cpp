#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,s,r,rose,m,violets,sunflowers,R,triangle;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4*triangle);
        r=triangle/s;
        rose= 3.14159265358979323846264338327950288419716939937510582097*(r*r);
        violets=triangle-rose;
        sunflowers=(3.14159265358979323846264338327950288419716939937510582097*R*R)-triangle;
        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,rose);
    }
    return 0;
}
