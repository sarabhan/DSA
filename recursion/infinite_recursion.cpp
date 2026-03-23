#include<iostream>
using namespace std;
void fun()
{
    cout<<1;
    return fun();
}
int main()
{
        fun();
}