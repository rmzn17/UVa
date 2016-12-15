#include<stdio.h>

int main()
{
    int number,i,j,flag,tc;
    scanf("%d",&tc);
    while(tc--)
    {

        scanf("%d",&number);
        for(i=2; i<=number; i++)
        {
            flag=0;

            for(j=2; j*j<=number; j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {

                if(i*2>number&&i<=number)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
