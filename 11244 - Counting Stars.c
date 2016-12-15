#include<stdio.h>
#include<string.h>

int main()
{

    int row,column,i,j,star;
    while(&row,&column)==2)
    {
        char input[1000][100];
        int adjacent=0;
        if(row==0&&column==0)
            break;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                scanf("%c",&input[i][j]);
            }
        }
        star=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if (input[i][j]=='*')
                {
                    if (input[i-1][j-1]=='*' && i-1>=0 && j-1>=0) adjacent++ ;
                    if (input[i-1][j]=='*' && i-1>=0 ) adjacent++ ;
                    if (input[i-1][j+1]=='*' && i-1>=0 && j+1<column ) adjacent++ ;
                    if (input[i][j-1]=='*'  && j-1>=0 ) adjacent++ ;
                    if (input[i][j+1]=='*'  && j+1<column ) adjacent++ ;
                    if (input[i+1][j-1]=='*' && i+1<row && j-1>=0 ) adjacent++ ;
                    if (input[i+1][j]=='*' && i+1<row ) adjacent++ ;
                    if (input[i+1][j+1]=='*' && i+1<row && j+1<column) adjacent++ ;
                    if (adjacent==0) star++ ;
                    else adjacent=0 ;

                }
            }
        }
        printf("%d\n",star);
    }
}
