#include<stdio.h>

int main()
{
    long long int initial,limit,i=1,j,count,a,b;

    while(scanf("%lld%lld",&initial,&limit)==2)
    {

        if(initial<0&&limit<0)
            break;

        count=0;
        a=initial;


        while(initial<=limit)
        {
            if(initial==1)
            {
                count++;
                break;
            }


            else if(initial%2==0)
            {
                count++;
                initial=initial/2;

            }

            else if(initial%2==1)
            {
                count++;
                initial=(initial*3)+1;

            }

        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i++,a,limit,count);


    }
    return 0;
}
