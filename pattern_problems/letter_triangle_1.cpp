#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    // for (int i=0; i<n; i++)
    // {
    //     char a = 'a';
    //     for(int j=n-i; j>0; j--) 
    //     {
    //         cout<<a;
    //         a++;       
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<endl;
    char a='a';
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<=i; j++)
        {
            cout<<a;
        }
        a++;
        cout<<endl;
    }
    
}