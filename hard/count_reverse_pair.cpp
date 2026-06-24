#include<iostream>
#include<vector>
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
int countpairs(vector<int> &v, int low, int mid, int high)
{
    int j=mid+1, count=0;
    for(int i=low; i<=mid; i++)
    {
        while (j<=high && v[i]>2*v[j])
            j++;
        count = count+j-(mid+1); // counts inversions
    }
    return count;
}
int divide(vector<int> &v, int low, int high )
{
    int count=0;
    if(low>=high)
        return count;
    int mid = (low+high)/2;
    count = count+divide(v, low, mid);
    count = count+divide(v,mid+1,high); 
    count = count+countpairs(v, low,mid,high); 
    merge(v,low,mid,high);
    return count;
}
int finalcall(vector<int> &final, int n)
{
    return divide(final,0,n-1);
}
int main()
{
    vector<int> v = {3,2,1,4};
    cout<<finalcall(v,v.size());
    return 0;
}