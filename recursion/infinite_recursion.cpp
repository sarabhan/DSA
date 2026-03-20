#include<iostream>
using namespace std;
void fun()
{
    cout<<1;
    fun();
}
int main()
{
        fun();
}