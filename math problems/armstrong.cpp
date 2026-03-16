#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = n;
    int b =n;
    int count = 0;
    while(a>0)
    {
        log10(a);
        count++;
        a=a/10;
    }
    int sum=0;
    while(n>0)
    {
        int rem = n%10;
        sum = sum + pow(rem,count);
        n=n/10;
    }
    if(sum==b)
        cout<<"yes armstrong";
    else
        cout<<"no armstrong";

}