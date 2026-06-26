#include<iostream>
#include<vector>
using namespace std;
int insertindex(vector<int> &v, int size, int low, int high, int num)
{
    int temp=size;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(v[mid]==num)
            return mid;
        else if(v[mid]<num)
            low = mid+1;
        else
        {
            temp = mid;
            high = mid-1;
        }
    }
    return (temp);
}
int main() 
{
    vector<int> v = {3,5,8,15,19};
    cout<<insertindex(v, v.size(),0,v.size()-1, 9);
    return 0;
}