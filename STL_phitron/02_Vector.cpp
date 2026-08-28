
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
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        numbers.push_back(input);                                       //
    }
    cout<<numbers.size()<< '\n';               //koyta element ase ta show korbe
    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<'\n';
    return 0;
}

*/


/*

int main ()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        numbers.push_back(input);                                        //
    }
    numbers.pop_back();                              //pison theke ekta kore nb kaata jabe
    numbers.pop_back();
    cout<<numbers.size()<< '\n';                    //koyta element ase ta show korbe
    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<'\n';
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
    numbers.push_back(input);
}

cout << numbers.front()<< " "<<numbers.back()<< '\n';           //5 ta number nile 1st er ta ar last er ta show krbe

return 0;
}

*/

/*
int main()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        numbers.push_back(input);
    }

    numbers.clear();                          //elements delete kore dibe
    cout<<numbers.empty()<< '\n';            //element thakle 0 show krbe & element na thakale 1 show krbe
    cout<<"size-"<<numbers.size()<< '\n';

    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }

    return 0;
}
*/

/*
int main()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        numbers.push_back(input);
    }

    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<< '\n';

    auto it =numbers.begin();        // itaretor contain er 1st element print hbe_____begin()
    cout << *it << '\n';

    return 0;

}

*/

/*
int main()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        numbers.push_back(input);
    }
    auto lastValue =numbers.end();
    lastValue--;
    cout<<*lastValue<<'\n';                                    //last nb print


    for(auto it =numbers.begin(); it!= numbers.end(); it++)      //loop diye print
    {
        cout<<*it<<" ";
    }
    return 0;
}
*/

int main()
{
    int n;
    cin>>n;
    vector<int>numbers;
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        numbers.push_back(input);
    }
    reverse(numbers.begin(),numbers.end());      //element reverse
    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<< '\n';

    sort(numbers.begin(),numbers.end());               //element sortint
    for(int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<< '\n';

    auto mn = min_element(numbers.begin(),numbers.end());   //minimum element
    cout<<*mn << '\n';
    auto mx = max_element(numbers.begin(),numbers.end());   //maximum element
    cout<<*mx << '\n';
    int maxElementPosition=mx-numbers.begin();
    cout<<"Max element position -> "<<maxElementPosition<< '\n';    // max element posistion

    return 0;
}
