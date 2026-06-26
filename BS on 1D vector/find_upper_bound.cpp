#include<iostream>
#include<vector>
using namespace std;
int find_upper_bound(vector<int> &v, int size, int low, int high, int findlow)
{
    int temp=size;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[mid]<=findlow)
            low = mid+1;
        // else if(v[mid]>findlow)
        else
        {
            temp = mid;
            high = mid-1;
        }
    } 
    return temp;
}
int main() 
{
    vector<int> v = {3,5,8,9,15,19};
    cout<<find_upper_bound(v, v.size(),0,v.size()-1, 9);
    return 0;
}