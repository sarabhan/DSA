#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0; i<=n-1; i++)
    {
        for (int j=n-2-i; j>=0; j--)
        {
            cout<<"-";
        }
        // cout<<endl;
        for (int j=n-i; j<=n+i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=0; i<=n-1; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"-";
        }
        for(int j=i; j<=n+2-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;


    }

}