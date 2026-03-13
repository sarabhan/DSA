#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0)
    // {
    //     cout<<n%10;
    //     n=n/10;
    // }
    //but this just prints out the digits. what if we want to save it as a number
    int base=0;
    while(n>0)
    {
        int digit = n%10;
        n=n/10;
        base=(base*10)+digit;
    }
    cout<<base;
}