#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i=0; i<2*n; i++)
    {
        if(i<n)
        {
            for(int j=0; j<=n-1-i; j++)
            {
                cout<<"*";
            }
            for(int j=n-i; j<n+i; j++)
            {
                cout<<" ";
            }
            for(int j=n+i; j<2*n; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=0; j<=i-n; j++)
            {
                cout<<"*";
            }
            for(int j=i-n+1; j<3*n-i-1; j++)
            {
                cout<<" ";
            }
            for(int j=3*n-i-1; j<2*n; j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}