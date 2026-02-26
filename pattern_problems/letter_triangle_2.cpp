#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    for (int i=0; i<n; i++)
    {
        char a ='a';
        for(int j=n-i-2; j>=0; j--)
        {
            cout<<"_";
        }
        for(int j=n-i-1; j<=n+i-1; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}