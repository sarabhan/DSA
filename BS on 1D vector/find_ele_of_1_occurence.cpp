#include<iostream>
#include<vector>
using namespace std;
int findsingle(vector<int> &v, int low, int high)
{
    // find mid
    // if mid is even
        // look at mid+1. if its value is same as mid,
            // then pattern isnt broken, and single ele is on right
            // search on right by low = mid+2    
        // look at mid+1. if value is diff than mid,
            // pattern has been broken, single ele is on left
            // search high = mid
    // else
        // check mid+1, if value is diff, 
            // pattern hasnt been broken, ele is on right
            // do low = mid+2
        // look at mid+1. if its value is same as mid
            // pattern has been broken, single ele is on left
            // do high = mid
        // 
    while(low<high)
    {
        int mid = low+(high-low)/2;
        if(mid%2 == 0)
        {
            if(v[mid]==v[mid+1])
                low = mid+2;
            else 
                high = mid;
        }
        else
        {
            if(v[mid]!=v[mid-1])
                high = mid;
            else
                low=mid+1;
        }
    }
    return v[low];
     

}
int main() 
{
    vector<int> v = {1,1,2,2,3,3,4,5,5,6,6};
    cout<<findsingle(v,0,v.size()-1);
    return 0;   

}