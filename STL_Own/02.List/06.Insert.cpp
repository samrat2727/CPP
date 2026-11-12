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

    /*
       li.insert(li.begin(),5);
       li.insert(li.end(),5);
    */

    // Declare Iterator
    list<int>::iterator it;

    // Initialize Iterator
    it = li.begin();

    // Move Iterator 3 Positions Forward
    advance(it,3);

    // Insert 4 Copies of 5
    li.insert(it,4,5);

    // Print List
    for(auto it: li)
    {
        cout << it << " ";
    }
    cout << endl;
}
