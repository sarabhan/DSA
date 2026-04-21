#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int find_missing(vector<int> &v, int size)
{
    int idealsum = size*(size+1)/2;
    int actualsum = accumulate(v.begin(), v.end(),0);
    int missing = idealsum - actualsum;
    return missing;
}
int main()
{
    vector<int> v = {8, 2, 4, 5, 3, 7, 1};
    cout<<find_missing(v,v.size());
}