#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int alt=n; 
    int base=0;
    while(n>0)
    {
        int digit = n%10;
        n=n/10;
        base=(base*10)+digit;
    }
    if(alt==base)
    {
        cout<<"yes pali";
    }
    else cout<<"no pali";
    return 0;
}