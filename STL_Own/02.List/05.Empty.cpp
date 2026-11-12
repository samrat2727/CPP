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

    // Clear List
    li.clear();

    // Print List
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    // Check Empty
    if(li.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    return 0;
}
