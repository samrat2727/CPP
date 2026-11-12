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
    // Erase First Element
    cout << "Before Erase" << endl;

    list<int>::iterator it;
    it = li.begin();

    li.erase(it);

    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    */

    /*
    // Erase Element at Position 3
    cout << "Before Erase" << endl;

    list<int>::iterator it;
    it = li.begin();

    advance(it,3);
    li.erase(it);

    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    */

    // Erase a Range of Elements
    cout << "Before Erase" << endl;

    list<int>::iterator it, it2;

    it = li.begin();
    it2 = li.begin();

    advance(it2,3);

    li.erase(it,it2);

    // Print List After Erase
    for(auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
