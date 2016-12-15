#include<stdio.h>

int main()
{
int a,b,c,d;
    for( a=2; a<=200; a++)
    {
        int x=a*a*a;
        for(b=2; b<=200; b++)
        {
            int y=b*b*b;
            if(x<y)
                break;
            for( c=b; c<=200; c++)
            {
                int  z=c*c*c;
                if(x<y+z)
                    break;
                for(d=c; d<=200; d++)
                {
                    int perfect=d*d*d;
                    if(x<y+z+perfect)
                        break;
                    if(x==y+z+perfect)
                    {
                        printf("Cube = %d, ",a);
                        printf("Triple = (%d,%d,%d)\n",b,c,d);
                    }
                }
            }
        }
    }

    return 0;
}








