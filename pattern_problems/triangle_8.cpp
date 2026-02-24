#include<iostream>
using namespace std;
int main()
{
    int a; cin>>a;
    for (int i=0; i<a*a; i++)
    {
        if (i<(a*a)/2)
        {
            for(int j=0; j<i+1; j++)
            {
                cout<<"*"<<endl;
                cout<<i<<","<<j;
            }
        }
        else
        {
            for(int j=i+1; j>0; j--)
            {
                cout<<"*";
            }
        }
        cout<<endl;

    }
}