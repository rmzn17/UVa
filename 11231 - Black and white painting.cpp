#include<stdio.h>
#include<math.h>
long long int calculate(long long int n,long long int m )
{
    long long int result =(n-7)*(m-7);
    return result;

}
int main()
{
    long long  int n,m,c;
    while(scanf("%lld%lld%lld",&n,&m,&c)==3)
    {
        if(n==0&&m==0&&c==0)
            break;

        long long int result=calculate(n,m);

        long long int number_of_embedded=result/2;
        if(c==0)
        {
            printf("%lld\n",number_of_embedded);
            continue;
        }
        if(result%2!=0&&c==1)
            number_of_embedded++;
        printf("%lld\n",number_of_embedded);


    }
    return 0;
}

