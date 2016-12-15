#include<stdio.h>
#include<string.h>

int main()
{
    int Lowest[10000],highest[10000],tc,i,DatabaseSize;
    char input[10000];
    char maker[10000][50];
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&DatabaseSize);
        getchar();
        for(i=0; i<DatabaseSize; i++)
        {
            gets(input);
            sscanf(input,"%s%d%d",maker[i],&Lowest[i],&highest[i]);
        }
        int query,price,k;
        scanf("%d",&query);
        for(i=0; i<query; i++)
        {
            int count=0,key=0;
            scanf("%d",&price);
            for(k=0; k<DatabaseSize; k++)
            {
                if(price>=Lowest[k]&&price<=highest[k])
                {
                    count++;
                    key=k;
                }
            }
            if(count==1)
            {
                puts(maker[key]);
            }
            else
                printf("UNDETERMINED\n");
        }
        if(tc)
            puts("");
    }
    return 0;
}
