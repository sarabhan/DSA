#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int longest_subarray(vector<int> &v, int size, int getsum)
{
    unordered_map<int,int> um; //stores the sum and the first index it occurred at.
    //initialize sum and max len of subarray as 0
    int sum=0, maxlen = 0;
    for(int i=0; i<size; i++)
    {
        sum = v[i]+sum;// add to get sum
        if(sum==getsum) // if required sum is achieved, then 
            maxlen = i++; // shift window to right by 1 place
        if(um.find(sum - getsum)!=um.end()) //check if required sum was obtained before in previous subarrays
            maxlen=max(maxlen,i-um[sum-getsum]); //if yes, then the longer subarray is selected
        if(um.find(sum) == um.end()) //store the first occurrence 
            um[sum] = i;
    }
    return maxlen;
}
int main()
{
    vector<int> v = {9, -3, 3, -1, 6, -5};
    cout<<longest_subarray(v, v.size(),0);
    return 0;
}