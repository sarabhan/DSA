#include<iostream>
#include<map>
using namespace std; 
int main()
{
    map<pair<int,int>, int> mp;
    mp[{1,1}]=2;
    for(auto i = mp.begin(); i!=mp.end(); i++)
    {
        cout<<i->first.first<<" "<<i->first.second<<endl;
        cout<<(*i).second<<endl;
    }

    //OR MUCH EASIER WAY IS 
    for(auto i:mp)
    {
        cout<<i.first.first<<" "<<i.second<<endl;
    }
    auto i = mp.find({1,1});
    cout<<(*i).second;
    return 0;
}