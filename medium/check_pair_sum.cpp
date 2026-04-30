#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int check_pair_sum(vector<int> &v,  int size, int getsum)
{
    // there are 2 ways of solving this problem
    // if the array is small, then this is the way

    unordered_map<int, int> um;  // Map to store element -> index
    for (int i = 0; i < size; i++) 
    {
        int complement = getsum - v[i];  // Needed value to reach target sum
        // Check if its already in map. if yes, then return the number
        if (um.find(complement) != um.end()) 
        {
            return 1;  // Pair found
        }
        // else store current element with its index for future reference
        um[v[i]] = i;
    }
    // No pair found
    return 0;

    //if the array is large, this is the way
    // initial v = {2,6,5,8,11}
    // sorted v = {2,5,6,8,11}
    sort(v.begin(),v.end());
    int left=0, right = size;
    while(left<right)
    {
        int sum = v[left]+v[right];
        if(sum==getsum)
            return 1;
        else if(sum<getsum)
            left++;
        else //sum>getsum
            right++;
    }
    return 0;
}
int main()
{
    vector<int> v = {2,6,5,8,11};
    int flag = check_pair_sum(v,v.size(),15);
    if(flag==0)
        cout<<"no";
    else
        cout<<"yes";
}