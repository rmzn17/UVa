#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long int n,sqr,result;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        sqr=sqrt(n);
        result=sqr*sqr;
        if(result==n)
            printf("yes\n");
        else
            printf("no\n");

    }
return 0;
}

