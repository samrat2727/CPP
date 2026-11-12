
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(100);
    v1.push_back(20);
    v1.push_back(300);
    v1.push_back(5);
    v1.push_back(10);

    // Before Sort
    cout << "Before Sort:" << endl;

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Ascending Order (Small to Large)
    sort(v1.begin(), v1.end());

    cout << "\nAscending Order:" << endl;

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Descending Order (Large to Small)
    sort(v1.begin(), v1.end(), greater<int>());

    cout << "\nDescending Order:" << endl;

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
