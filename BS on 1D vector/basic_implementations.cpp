#include<iostream>
#include<vector>
using namespace std;
int iterative_binarysearch(vector<int> &v, int size, int find)
{
    int low=0, high = size-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]<find)
            low = mid+1;
        else if(v[mid]>find)
            high = mid-1;
        else
            return mid;
    }
    return -1;
}
int recursive_binarysearch(vector<int> &v, int find, int low, int high)
{
    if(low > high)
        return -1;
    int mid = (low+high)/2;
    if(v[mid]<find)
    {
        low = mid+1;
        return recursive_binarysearch(v, find, low, high);
    }
    else if(v[mid]>find)
    {
        high = mid-1;
        return recursive_binarysearch(v, find, low, high);
    }
    else
        return mid;
}
int main() 
{
    vector<int> v = {3,4,6,7,9,12,16,17};
    cout<<iterative_binarysearch(v, v.size(), 9)<<endl;
    cout<<recursive_binarysearch(v,9,0,v.size()-1);
    return 0;
}