#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    double input;
    while(scanf("%lf",&input)==1)
    {

        printf("%.10lf\n",input*(sin(108*pi/180)/sin(63*pi/180)));
    }
    return 0;
}
