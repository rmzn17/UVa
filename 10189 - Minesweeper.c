#include<stdio.h>
#include<stdio.h>

int main()
{
    int adj[120][120],i,j,row,column,cs,flag=0;
    char inpu[120][120],ch;



    for(cs=1; scanf("%d %d%c",&row,&column,&ch); cs++)
    {

        if(!row&&!column)
            return 0;

        for(i=0; i<row; i++)
            gets(inpu[i]);

        memset(adj,0,sizeof(adj));

        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(inpu[i][j]=='*')
                {
                    adj[i-1][j-1]++;
                    adj[i-1][j]++;
                    adj[i-1][j+1]++;
                    adj[i][j-1]++;
                    adj[i][j+1]++;
                    adj[i+1][j-1]++;
                    adj[i+1][j]++;
                    adj[i+1][j+1]++;
                }
            }

        }
        if(flag)  printf("\n");
        printf("Field #%d:\n",cs);
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if(inpu[i][j]=='*')
                {
                    printf("%c",inpu[i][j]);

                }
                else printf("%d",adj[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
