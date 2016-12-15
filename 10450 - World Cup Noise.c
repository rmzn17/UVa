#include<stdio.h>
long int arr[1000];

void fibonacci()
{
    long int n,i,j;
    arr[0]=0;
    arr[1]=2;
    arr[2]=3;
    for(i=3; i<=51; i++)
        arr[i]=arr[i-1]+arr[i-2];

}
int main()
{
    long int n,i=1,j,tc;
    fibonacci();
    scanf("%ld",&tc);
    while(tc--)
    {
        scanf("%ld",&n);
        printf("Scenario #%ld:\n%ld\n\n",i,arr[n]);
        i++;
    }
}
