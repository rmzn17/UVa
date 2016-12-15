#include<stdio.h>
int main()
{

    double hour,minute;;
    while(scanf("%lf:%lf",&hour,&minute)==2)
    {
        if(hour==0 && minute==0)
            break;
        double angle=(hour*30)+(minute*0.5);
        double temp=minute*6;
        if(angle<temp)
        {
            double swap=temp;
            temp=angle;
            angle=swap;
        }
        angle-=temp;
        if(angle>180)
            angle=360-angle;
        printf("%.3f\n",angle);
    }
    return 0;
}
