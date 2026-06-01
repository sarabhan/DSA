#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int countsub(vector<int> &v, int size, int k)
{
    unordered_map<int,int> mp;

    mp[0] = 1;

    int sum = 0;
    int count = 0;

    for(int x : v)
    {
        sum += x;

        count += mp[sum - k];

        mp[sum]++;
    }
    return count;
}
int main()
{
    vector<int> v = {3, 1, 2, 4};
    cout<<countsub(v,v.size(),6);
    return 0;
}