#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_back(6);

    // Before Reverse
    cout<<"Before Reverse: ";
    for(auto it : li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // Reverse List
    li.reverse();

    // After Reverse
    cout<<"After Reverse: ";
    for(auto it : li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
