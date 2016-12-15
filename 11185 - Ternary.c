#include<stdio.h>

int main()
{
     int arr[1000],n,i,mod,k;

    while(scanf("%d",&n)==1)
    {
        i=0;
        if(n<0)
            break;
       while(n>=0)
       {
           mod=n%3;
           arr[i]=mod;

           n=n/3;

            if(n==0)
            break;
             i++;

       }

       for(k=i;k>=0;k--)
       printf("%d",arr[k]);
       printf("\n");
    }
return 0;
}
