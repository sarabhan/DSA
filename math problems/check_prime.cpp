#include<iostream> 
using namespace std; 
int main() 
{ 
    int n, rem; 
    cin>>n; 
    for(int i=2; i<=int(sqrt(n)); i++) 
    { 
        rem=n%i; 
        if(rem==0) 
        { 
            cout<<"not a prime"; 
            break; 
        }
    } 
    if(rem!=0) cout<<"yes a prime"; 
    return 0; 
}