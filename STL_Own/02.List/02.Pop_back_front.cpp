#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;

    // Insert Elements
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_back(6);

    // Remove First Element
    li.pop_front();

    // Print List
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    // Remove Last Element
    li.pop_back();

    // Print List
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    // Remove First Element Again
    li.pop_front();

    // Print List
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
