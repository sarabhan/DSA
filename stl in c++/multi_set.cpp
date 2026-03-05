#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms = {1};
    ms.emplace(1);
    ms.emplace(2);
    ms.emplace(10);
    ms.emplace(10);
    ms.emplace(10);
    ms.emplace(2);
    ms.emplace(5);
    for (auto i = ms.begin(); i!=ms.end(); i++)
    {
        cout<<*i<<",";
    }
    cout<<endl;
    auto a = ms.find(10);
    for (int j=0; j<2 && a!=ms.end(); j++)
    {
        a = ms.erase(a);
    }
    for (auto i = ms.begin(); i!=ms.end(); i++)
    {
        cout<<*i<<",";
    }
    return 0;
}