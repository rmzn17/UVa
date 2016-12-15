#include<stdio.h>
int main()
{
    long int n;
    int i,count,arr[1000],k;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        i=0;
        while(n!=0)
        {
            arr[i]=n%2;
            n/=2;
            i++;
        }
        count=0;
        printf("The parity of ");
        for(k=i-1; k>=0; k--)
        {
            printf("%d",arr[k]);
            if(arr[k]==1)
                count++;
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}

