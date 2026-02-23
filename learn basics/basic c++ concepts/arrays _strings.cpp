#include<iostream>
using namespace std;

class why_create_class
{

};

int main()
{
    //STARTING WITH ARRAYS HERE
    int arr[5];
    int i;
    for (i=0; i<size(arr); i++)
    {
        cin >> arr[i] ;
    }
    for (i=0; i<size(arr); i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<"\n";

    //STARTING WITH STRINGS HERE
    string s = "huha";
    cout<<s.length();

    for (int i=0; i<s.length(); i++)
    {
        cout<<s[i]<<" ";
    }

    return 0;

}