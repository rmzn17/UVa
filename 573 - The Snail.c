#include<stdio.h>

int main()
{
    int day;
    double finl,percentg,h,d,u,f;
    while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)==4)
    {
        if(h==0.0)
            break;

        finl=0.0;
        day=0;
        percentg=u*(f/100);
        while(1)
        {
            day++;
            if(u>0) finl+=u;
            u=u-percentg;
            if(finl>h)
                break;
            finl-=d;
            if(finl<0)
                break;
        }
        if(finl>=0)
            printf("success on day %d\n",day);
        else
            printf("failure on day %d\n",day);

    }
return 0;
}

