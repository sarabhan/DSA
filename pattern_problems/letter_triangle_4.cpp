#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;

    for(int i=n-1; i>=0; i--)
    {
        char a = 'a'+i;
        char max='a'+n-1;
        for(int j=0; j<n-i; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}