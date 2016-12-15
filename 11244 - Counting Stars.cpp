#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{

    int row,column,i,j,star;
    while(cin>>row>>column)
    {
        if(row==0&&column==0)
            break;
        char input[1000][1000];
        int adjacent=0;

        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                cin>>input[i][j];
            }
        }
        star=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if (input[i][j]=='*')
                {
                    if (input[i-1][j-1]=='*' && i-1>=0 && j-1>=0)
                        adjacent++ ;
                    else if (input[i-1][j]=='*' && i-1>=0 )
                        adjacent++ ;
                    else if (input[i-1][j+1]=='*' && i-1>=0 && j+1<column )
                        adjacent++ ;
                    else if (input[i][j-1]=='*'  && j-1>=0 )
                        adjacent++ ;
                    else if (input[i][j+1]=='*'  && j+1<column )
                        adjacent++ ;
                    else if (input[i+1][j-1]=='*' && i+1<row && j-1>=0 )
                        adjacent++ ;
                    else if (input[i+1][j]=='*' && i+1<row )
                        adjacent++ ;
                    else if (input[i+1][j+1]=='*' && i+1<row && j+1<column)
                        adjacent++ ;

                    if (adjacent==0)
                        star++ ;
                    else adjacent=0 ;

                }
            }
        }
        printf("%d\n",star);
    }
}

