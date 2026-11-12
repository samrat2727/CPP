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

    // Before Remove
    cout<<"Before Remove: ";
    for(auto it : li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // Remove Value 3
    li.remove(3);

    // After Remove
    cout<<"After Remove: ";
    for(auto it : li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
