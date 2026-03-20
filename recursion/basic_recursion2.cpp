#include<iostream>
using namespace std;
void fun(int count)
{
    cout<<count<<" don"<<endl;
    if(count==1)
        return;
    count--;
    fun(count);
}
int main()
{
    int count;
    cin>>count;
    fun(count);
    return 0;
}