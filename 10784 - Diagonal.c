#include<stdio.h>
#include<math.h>
int main()
{
   long int n,N,k=1;
    while(scanf("%ld",&N)&&N)
    {
        n=ceil((3+sqrt(9+8*N))/2);
        printf("Case %ld: %ld\n",k++,n);
    }
}
