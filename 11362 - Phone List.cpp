#include<stdio.h>
#include<iostream>
#include<new>
#include<string.h>
#include<algorithm>
#include<stdlib.h>

using namespace std;

struct node
{
    bool endmark;
    node *next[10+1];
    node()
    {
        endmark=false;
        for(int i=0; i<10; i++) next[i]=NULL;
    }
}*root;


bool insert(char *str,int len)
{
    node *curr=root;

    for(int i=0; i<len; i++)
    {
        int id=str[i]-'0';
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->endmark=true;


}

bool search(char *str1,int len)
{

    node *curr=root;

    for(int i=0; i<len; i++)
    {
        int id=str1[i]-'0';
        if(curr->next[id]==NULL) return true;
        curr=curr->next[id];
    }
    return curr->endmark;
}

void del(node *cur)
{

    for(int i=0; i<10; i++)
        if(cur->next[i])
            del(cur->next[i]);


    delete(cur);
}

int main()
{

    int t, n;

    scanf("%d", &t);

    while(t--)
    {
        root=new node();
        scanf("%d", &n);
        getchar();


        bool flag = 0;
        char str1[20];
        scanf("%s",str1);


        int tc;

        for(tc=1; tc<n; tc++)
        {
            char str[20];
            scanf("%s",str);
            insert(str,strlen(str));
        }

        flag=search(str1,strlen(str1));

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
        del(root);
    }

    return 0;
}


