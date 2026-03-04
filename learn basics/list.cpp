#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l(10,20);
    l.push_back(2); //slower
    l.emplace_back(3); //faster

    //vectors are costly for insertion as target index has to be reached by
    //incrementing the 1st index
    l.push_front(100); //however, list has a separate function to add an element in the start
    l.emplace_front(200); //obviously faster

    //REST ALL OTHER FUNCTIONS ARE SAMEE
}