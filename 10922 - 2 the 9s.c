#include<stdio.h>
#include<string.h>
int main()
{
    char input[1010];
    int i;
    while(gets(input))
    {

        int sum=0;
        int stringlen=strlen(input);
        for(i=0; i<stringlen; i++)
            sum+=input[i]-48;
        if(sum==0)
            break;
        if(sum%9)
            printf("%s is not a multiple of 9.\n",input);
        else
        {
            int count=1;
            while(sum>9)
            {
                count++;
               int temp=0;
                while(sum>0)
                {
                    temp+=sum%10;
                    sum/=10;
                }
                sum=temp;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",input,count);
        }
    }
    return 0;
}
