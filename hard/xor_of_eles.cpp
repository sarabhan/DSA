#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int count_subarray(vector<int> &v, int size, int k)
{
    map<int, int> mp;
    //select numbers starting from 0th index
    //convert then to binary
    //do xor
    //count is the final anaswer, current xor is xor
    int count = 0, xor=0;
    mp[0] = 1;
    for(int i=0; i<size; i++)
    {
        xor = v[i] ^ xor;
        int target = xor^k;
        // If target exists in map, add its frequency
        if (mp.find(target) != mp.end()) 
            count += mp[target]; 
        mp[xor]++;
    } 
    return count;
}
int main()
{
    vector<int> v = {4, 2, 2, 6, 4};
    cout<<count_subarray(v, v.size(),6);
    return 0;
}