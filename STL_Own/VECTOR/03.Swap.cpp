
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    // Example 1: Swapping Two Vectors

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    cout << "Before Swapping:" << endl;

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    swap(v1, v2);

    cout << "After Swapping:" << endl;

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    */


    // Example 2: Swapping Three Vectors

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    vector<int> v3;
    v3.push_back(22);
    v3.push_back(23);
    v3.push_back(24);

    // Before Swapping
    cout << "Before Swapping:" << endl;

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    for(int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    // Swapping
    swap(v1, v3);
    swap(v2, v1);

    // After Swapping
    cout << "\nAfter Swapping:" << endl;

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    for(int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}
