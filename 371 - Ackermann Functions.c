#include<stdio.h>

int main()
{
    long long int a,b,c,d,x,y,count,i,max,temp;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        max=0;
        if(a==0||b==0)
            break;

        if(b<a)
        {
            temp=a;
            a=b;
            b=temp;
        }

        for(i=b; i>=a; i--)
        {
            count=1;
            x=i;
            if(x%2==0)
            {
                x=x/2;


            }
            else
            {
                x=(3*x)+1;

            }

            while(x!=1)
            {
                if(x%2==0)
                {
                    x=x/2;
                    count++;

                }
                else
                {
                    x=(3*x)+1;
                    count++;
                }
            }
            if(count>=max)
            {
                max=count;
                y=i;

            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,y,max);
    }

    return 0;
}
