#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> vtemp;
    int i = low,j = mid+1, count=0;
    while(i<=mid && j<=high)
    {
        //this is used if eles are there on both sides
        if(v[i]<=v[j])
        {
            vtemp.emplace_back(v[i]);
            i++;
        }
        else
        {
            count = count+(mid-i+1); // counts inversions
            vtemp.emplace_back(v[j]);
            j++;
        }
    }
    //in case 1 side runs out of eles
    if(i<=mid)
    {
        while(i<=mid)
        {
            vtemp.emplace_back(v[i]);
            i++;
        }
    }
    else
    {
        while(j<=high)
        {
            vtemp.emplace_back(v[j]);
            j++;
        }        
    }

    // copy temp vector into og vector
    for(int k=low; k<=high; k++)
    {
        v[k] = vtemp[k-low];
    }
    return count;
}
int divide(vector<int> &v, int low, int high )
{
    if(low>=high)
        return 0;
    int mid = (low+high)/2;
    int left = divide(v, low, mid);
    int right = divide(v,mid+1,high); 
    int merged = merge(v, low,mid,high); 

    return left+right+merged;
}

int main()
{
    vector<int> v = {3,1,2,4,1,5,2,6,4};
    int inversions = divide(v, 0, v.size()-1);
    cout<<inversions;
    return 0;
}