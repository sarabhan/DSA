#include<iostream>
using namespace std;
int main()
{
    int a, base=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        base++;
        for(int j=0; j<a; j++)
        {
            if(i>=j)
            {
                cout<<base;
            }
        }
        cout<<endl;
    }
    return 0;
}