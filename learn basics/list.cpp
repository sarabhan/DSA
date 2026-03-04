#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l(10,20);
    l.push_back(2); //slower
    l.emplace_back(3); //faster

    
    l.push_front(100); 
}