#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = n;
    // while(a>0)
    // {
    //     log10(a);
    //     count++;
    //     a=a/10;
    // }
    // a much simpler way to count no.of digits is this
    int count = int(log10(n))+1;
    int sum=0;
    while(n>0)
    {
        int rem = n%10;
        sum = sum + pow(rem,count);
        n=n/10;
    }
    if(sum==a)
        cout<<"yes armstrong";
    else
        cout<<"no armstrong";

}