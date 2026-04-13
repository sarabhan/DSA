#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> vtemp;
    int i = low,j = mid+1;
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
}
void divide(vector<int> &v, int low, int high )
{
    if(low>=high)
        return;
    int mid = (low+high)/2;
    divide(v, low, mid);
    divide(v,mid+1,high); 
    merge(v, low,mid,high); 
}

int main()
{
    vector<int> v = {3,1,2,4,1,5,2,6,4};
    divide(v, 0, v.size()-1);
    for (auto i:v)
    {
        cout<<i<<",";
    }
}