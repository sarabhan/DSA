#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &v, int size, int low, int high, int num)
{
    int loc=-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[mid]==num)
            return mid;

        if(v[low]==v[mid] && v[mid]==v[high])
        {
            low++; high--;
            continue;
        }

        if(v[low]<=v[mid])
        {
            if(num>=v[low] && num<v[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else
        {
            if(num<=v[high] && num>v[mid])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}
int main() 
{
    vector<int> v = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    cout<<search(v, v.size(),0,v.size()-1, 3);
    return 0;   
}