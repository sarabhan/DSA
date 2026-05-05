#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort_vector(vector<int> &v, int size)
{
    int low=0, mid=0, high = size-1;
    while(mid<=high)
    {
        if(v[mid]==0)
        {
            swap(v[low],v[mid]);
            low++; mid++;
        }
        else if (v[mid]==1)
            mid++;
        else // if v[mid]==2
        {
            swap(v[mid], v[high]);
            high--;
        }
    }    
}
int main()
{
    vector<int> v= {1, 0, 2, 1, 0};
    sort_vector(v,v.size());
    for(auto i:v)
    {
        cout<<i<<",";
    }
}