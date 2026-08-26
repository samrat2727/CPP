#include<bits/stdc++.h>
using namespace std;


/*
int main ()
{
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i=0;i<n;i++)
    {
     cin>>numbers[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<numbers[i]<<" "<<;
    }

    return 0;
}
*/


/*

int main ()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0;i<n;i++)
{
    int input;
    cin>>input;
    numbers.push_back(input);        //
}
cout<<numbers.size()<< '\n';        //koyta element ase ta show korbe
for(int i=0;i<numbers.size();i++){
cout<<numbers[i]<<" ";}
    cout<<'\n';
return 0;
}

*/




int main ()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0;i<n;i++)
{
    int input;
    cin>>input;
    numbers.push_back(input);        //
}
numbers.pop_back();                  //back theke ekta kore number remove hbe
numbers.pop_back();
cout<<numbers.size()<< '\n';        //koyta element ase ta show korbe
for(int i=0;i<numbers.size();i++){
cout<<numbers[i]<<" ";}
    cout<<'\n';
return 0;
}












