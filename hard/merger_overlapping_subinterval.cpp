#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>> merger_overlapping(vector<pair<int,int>> &v, int size)
{
    sort(v.begin(),v.end());
    vector<pair<int,int>> final;
    int i=0;
    while(i<size)
    {
        pair<int,int> addthis = v[i];
        while(i+1<size && addthis.second >= v[i+1].first)
        {
            addthis.second = max(addthis.second, v[i+1].second);
            i++;
        }
        final.emplace_back(addthis);
        i++;
    }
    return final;
}
int main()
{
    vector<pair<int,int>> v = {{1,3},{2,6},{8,10},{15,18}};
    vector<pair<int,int>> final = merger_overlapping(v, v.size());
    for(auto i:final)
    {
        cout<<i.first<<","<<i.second<<endl;
    }
    return 0;
}