
#include<bits/stdc++.h>
using namespace std;

int main()
{

    /*
    // Example 1: Reverse Without Sorting

    vector<int>v1;
    v1.push_back(100);
    v1.push_back(20);
    v1.push_back(300);
    v1.push_back(5);
    v1.push_back(10);

    cout<<"Before Reverse"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    reverse(v1.begin(),v1.end());

    cout<<"After Reverse"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    */


    // Example 2: Reverse After Sorting

    vector<int>v1;
    v1.push_back(100);
    v1.push_back(20);
    v1.push_back(300);
    v1.push_back(5);
    v1.push_back(10);

    cout<<"Before Reverse"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // Ascending Order
    sort(v1.begin(),v1.end());

    cout<<"\nAscending Order"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // Reverse After Sorting
    reverse(v1.begin(),v1.end());

    cout<<"After Reverse"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    return 0;
}
