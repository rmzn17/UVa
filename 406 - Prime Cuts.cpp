#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<iostream>
#include<math.h>
using namespace std;

vector<int>prme;
int len=1;
void Prime_Sieve(int n)
{
    bool prime[n];

    memset(prime,true,sizeof(prime));
    int i,not_prime;

    for(i=2; i*i<n; i++)
    {
        if(prime[i]==true)
        {
            for(not_prime=i*2; not_prime<n; not_prime+=i)
            {
                prime[not_prime]=false;
            }
        }
    }

    int k;
    prme.push_back(1);

    for(k=2; k<n; k++)
    {
        if(prime[k]==true)
        {

            prme.push_back(k);

            len++;
        }
    }
}


 int main()
{
    int number,c;

    while(scanf("%d %d",&number,&c)!=EOF)
    {
        Prime_Sieve(number);
        printf("%d %d:",number,c);
        if(c*2>len)
        {

            for(int k=0; k<len; k++)
            {
                printf(" %d",prme[k]);
            }

        }
        else
        {

            if((len)%2==0)
            {
                c=c*2;
                int middle=((len/2)+1)-(c/2)-1;
                int range=((len/2))+(c/2);
                if(middle<=0)
                {

                    for(int k=0; k<len; k++)
                    {
                       printf(" %d",prme[k]);
                    }

                }

                else
                {

                    for(long  int print=middle; print<range; print++)
                    {
                        printf(" %d",prme[print]);
                    }

                }
            }
            else
            {
                 c=c*2-1;
                int middlee=(ceil)(len/2)-(floor)(c/2);
                int rangee=(ceil)(len/2)+(floor)(c/2);

                if(middlee<=0)
                {

                    for(int k=0; k<len; k++)
                    {
                        printf(" %d",prme[k]);
                    }

                }
                else
                {
                    for(int printt=middlee; printt<=rangee; printt++)
                    {
                        printf(" %d",prme[printt]);
                    }

                }
            }

        }
          printf("\n\n");
        prme.clear();
        len=1;
    }
    return 0;
}

