
#include<bits/stdc++.h>
using namespace std;

int main (){

vector<int>v;


=========================================
              01. PRINT VECTOR
===========================================

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

cout<<v[2]<<endl<<v[3]<<endl;
}



/*=========================================
                02. SIZE()
===========================================

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

cout<<v.size()<<endl;

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
*/


/*=========================================
           03. FRONT() & BACK()
===========================================

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

cout<<v.front()<<endl;
cout<<v.back()<<endl;
}
*/


/*=========================================
                04. CLEAR()
===========================================

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

cout<<v.size()<<endl;

v.clear();

cout<<v.size()<<endl;
}
*/


/*=========================================
                05. EMPTY()
===========================================

cout<<v.size()<<endl;

//v.clear();

if(v.empty())
    cout<<"Empty"<<endl;
else
    cout<<"Not Empty"<<endl;
}
*/


/*=========================================
               06. POP_BACK()
===========================================

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

cout<<v.size()<<endl;

v.pop_back();

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

cout<<v.size()<<endl;
}
*/


/*=========================================
                 07. ERASE()
===========================================

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

v.erase(v.begin()+2,v.end());

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
}
*/


}
