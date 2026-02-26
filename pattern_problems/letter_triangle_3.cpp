#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        char a='a';
        for(int j=0; j<=n-2-i; j++)
        {
            cout<<"_";
        }
        char max=a+i;
        for(int j=n-i-1; j<=n-1+i; j++)
        {
            if(a<=max)
            {
                cout<<a; a++;
            }
            else
            {
                max--;
                cout<<max;
            }
        }
        cout<<endl;
    }
}