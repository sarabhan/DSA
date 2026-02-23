#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int base =1;
        for(int j=a-1; j>=-1; j--)
        {
            if(i<=j)
            {
                cout<<base<<" ";
                base++;
            }
        }
        cout<<endl;
    }
    return 0;
}