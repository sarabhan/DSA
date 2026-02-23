#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number = ";
    cin>>a;
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<a; j++)
        {
            if(i<=j)
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    return 0;
}