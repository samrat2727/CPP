#include<bits/stdc++.h>
using namespace std;
int main()
{
                               
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
     cout<<endl;

      v.insert (v.begin()+2,3,4);
      v.insert (v.begin()+7,3,1);
      v.insert(v.end(),3,4);
      v.insert(v.end(),3,5);
      for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
     cout<<endl;

}
