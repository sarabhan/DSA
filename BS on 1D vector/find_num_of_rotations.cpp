#include<iostream>
#include<vector>
using namespace std;
int findrotation(vector<int> &v, int size, int low, int high)
{
    while(low<high)
    {
        int mid = low+(high-low)/2;
        if(v[mid]>v[high])
            low = mid+1;
        else
            high=mid;
    }
    return low;
}
int main() 
{
    vector<int> v = {4,5,6,7,0,1,2,3};
    cout<<findrotation(v, v.size(),0,v.size()-1);
    return 0;   
}