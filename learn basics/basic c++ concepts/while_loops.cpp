#include<iostream>
using namespace std;

int main()
{
    int f, base=1;
    cout<<"enter number for factorial = ";
    cin>>f;
    while (f>0)
    {
        base=base*f;
        f--;
    }
    cout<<"factorial is = "<<base;
}