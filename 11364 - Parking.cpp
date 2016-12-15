#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int cases,n,position[1000],i;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&position[i]);
            sort(position,position+n);
        printf("%d\n",2*(position[n-1]-*position));


    }
    return 0;
}

