#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*string name="rahim";
    cout<<name<<'\n';
    */
    /*
    pair<string,int>person;
    person.first ="bablu";
    person.second=25;

    cout <<person.first<<" "<<person.second<<'\n';
    */


    /*
    int n;
    cin>>n;
    pair<string,int>p[n];
    for (int i =0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;
        p[i].first=name;
        p[i].second=age;
    }
     for (int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<'\n';

     }


    */


    int n;
    cin>>n;
    pair<string,pair<int,string>>p[n];
    for (int i =0; i<n; i++)
    {
        string name, address;
        int age;
        cin>>name>>age>>address2;
        p[i].first=name;
        p[i].second.first=age;
        p[i].second.second=address;
    }
    for (int i=0; i<n; i++)
    {
        cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<< '\n';
    }



    return 0;
}
