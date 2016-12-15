#include<stdio.h>

int main()
{
    long int arr[100000],m,n,i,j,k,cn,index;
    while(scanf("%ld%ld",&n,&m)==2)
    {
        if(m>n || m<=1)
        {
            printf("Boring!\n");
            continue;
        }

        j=1;
        index=0;
        arr[index]=n;
        index++;
        while(n!=1&&m!=0)
        {
            if(n%m==0)
            {
                k=n/m;
                arr[index]=k;
                index++;
                n=k;
            }
            else
            {
                j=0;
                break;
            }

        }
        if(j==0)
            printf("Boring!\n");

        else
        {
            printf("%ld",arr[0]);

            for(i=1; i<index; i++)
                printf(" %ld",arr[i]);
            printf("\n");
        }

    }
    return 0;
}
