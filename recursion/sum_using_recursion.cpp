#include<iostream>
using namespace std;
int fun(int sum, int n)
{
    sum=sum+n;
    n--;
    if(n==0)
        return sum;
    fun(sum,n);
}
int main()
{
    int n,sum=0, total;
    cin>>n;
    total = fun(sum,n);
    cout<<total;
    return 0;
}