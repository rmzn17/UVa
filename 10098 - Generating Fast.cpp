#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main()
{
    int i,n,j,len;

    char ss[20];
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {

        gets(ss);

        len=strlen(ss);
        vector<char>arr;
        for(j=0; j<len; j++)
        {
            arr.push_back(ss[j]);
        }

        sort(arr.begin(),arr.end());

        do
        {

            for(j=0; j<len; j++)
            {
                cout<<arr[j];

            }
            printf("\n");

        }
        while(next_permutation(arr.begin(),arr.end()));
        printf("\n");

    }
    return 0;
}
