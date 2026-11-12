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

    // Print List
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    // First Element
    cout << li.front() << endl;

    // Last Element
    cout << li.back() << endl;

    return 0;
}
