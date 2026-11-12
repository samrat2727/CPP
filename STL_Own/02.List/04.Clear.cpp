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

    // Before Clear
    cout << "Before Clear" << endl;

    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "Size: " << li.size() << endl;

    // Clear List
    li.clear();

    // After Clear
    cout << "After Clear" << endl;

    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "Size: " << li.size() << endl;

    return 0;
}
