#include<stdio.h>

int main()
{
    long int participant,budget,nhotel,nweek,price,room,tot_price,i,j,minprice=1500000000;

    while(scanf("%ld%ld%ld%ld",&participant,&budget,&nhotel,&nweek)==4)
    {

        for(i=1; i<=nhotel; i++)
        {
            scanf("%ld",&price);
            for(j=1; j<=nweek; j++)
            {
                scanf("%ld",&room);
                tot_price=0;
                if(room>=participant)
                {
                    tot_price=price*participant;
                    if(minprice>tot_price)
                    {
                        minprice=tot_price;
                    }
                }
            }

        }
        if(minprice>budget)
            printf("stay home\n");

        else
            printf("%ld\n",minprice);

        minprice=1500000000;
    }
    return 0;
}


