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

    // Print List
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    // Print List Size
    cout << li.size() << endl;

    return 0;
}
