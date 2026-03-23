#include<iostream>
using namespace std;

void fun(int count, int n)
{
    cout<<count<<" don"<<endl;
    if(count==n)
        return;
    // count++;
    return fun(count+1,n);
    // if(count==10)
    //     return;
}
int main()
{
    int count = 1,n;
    cin>>n;
    fun(count,n);
}