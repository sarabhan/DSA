#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={6,2,4,1,0,10};
    // v.emplace_back(6); v.emplace_back(2);
    // v.emplace_back(4); v.emplace_back(1);
    // v.emplace_back(10);

    auto i = v.begin();
    sort(v.begin(), v.end());
    for(auto i =v.begin(); i!=v.end(); i++)
    {
        cout<<(*i)<<",";
    }

    //sorting an array of pairs
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    sort(a)

}