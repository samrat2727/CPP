
#include<bits/stdc++.h>
using namespace std;
/*
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    string s;
    for(int i=1; i<=n; i++)
    {
        char c;
        cin>>c;
        s.push_back(c);

    }
    s.clear();
    cout<<s.empty()<< '\n';
    cout<<s.size()<< '\n';
    return 0;

}

*/



#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);


int n;
cin>>n;
string s;
for(int i=1;i<=n;i++){
    char c;
cin>>c;
s.push_back(c);

}
cout<<s.substr(2)<< '\n';
return 0;

}


