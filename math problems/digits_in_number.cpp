#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // int count=0;
    // while(n>0)
    // {
    //     // cout<<n%10<<",";
    //     n=n/10;
    //     count++;
    // }
    // cout<<count;
    //however this is bruteforce approach. its time complexity is O(log10(n)) there is another way that uses less space and time.
    
    //time complexity of this is 0(1) 
    cout<<int(log10(n)+1);
    
}