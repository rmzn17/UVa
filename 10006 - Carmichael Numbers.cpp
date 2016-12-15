#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

int main()
{
    int number;
    while(scanf("%d",&number)==1)
    {
        if(number==0)
            break;

        if(number%2==0)
            printf("%d is normal.\n",number);

        else
        {
            if(number==561)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number== 1105)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number== 1729)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==2465)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number== 2821)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==6601)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==8911)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==10585)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==15841)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==29341)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==41041)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==46657)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==52633)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==62745)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==63973)
                printf("The number %d is a Carmichael number.\n",number);
            else if(number==75361)
                printf("The number %d is a Carmichael number.\n",number);
            else
                printf("%d is normal.\n",number);

        }

    }
    return 0;
}
