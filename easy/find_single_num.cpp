#include<iostream>
#include<vector>
#include<map>
using namespace std;
int find_single_num(vector<int> &v, int size)
{
    /// THIS IS NOT THE OPTIMAL APPROACH. TC IS O(n logn)
    // map<int,int> m;
    // for(int i=0; i<size; i++)
    // {
    //     m[v[i]]++;
    // }
    // for(auto i:m)
    // { 
    //     if(i.second==1)
    //         return i.first;
    // }
    /// THIS IS THE WAY
    int ans = 0;
    for(int x : v)
        ans = ans ^ x;
    return ans;

}
int main()
{
    vector<int> v = {4,1,2,1,2};
    cout<<find_single_num(v, v.size());
    return 0;
}