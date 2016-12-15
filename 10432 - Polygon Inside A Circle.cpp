#include <stdio.h>
#include <math.h>

int main()
{
    double area, r, n;
    while (scanf("%lf %lf",&r,&n)==2)
    {
        area = r*r*sin(2*3.14159265358979/n)/2.0;
        printf("%.3lf\n",area*n);
    }
    return 0;
}
