#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>

using namespace std;

int main()
{
    int numbers;

    map<int,int>MapNumber;
    queue<int>Line;
    while(cin>>numbers)
    {
        if(MapNumber[numbers]==0)
            Line.push(numbers);
        MapNumber[numbers]++;

    }

    while(Line.size())
    {
        cout<<Line.front()<<" "<<MapNumber[Line.front()]<<endl;

        Line.pop();

    }
    return 0;
}


