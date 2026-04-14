#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void recursive_bubble_sort(vector<int> &v, int size, int j, bool swapped)
{
    if(size==1)
        return;
    if(j==size-1)
    {
        if(!swapped)
            return;
        //returning size-1 means next iteration.
        //j=0 to start from 0th index in next iteration
        //swapped is set to false by default for next iteration
        recursive_bubble_sort(v,size-1,0,false); 
        return;
    }
    if(v[j]>v[j+1])
    {
        swap(v[j],v[j+1]);
        swapped=true;
    }
    recursive_bubble_sort(v,size,j+1,swapped);
    // if(i>=size-1)
    //     return;
    // for(int j=0; j<size-i-1; j++)
    // {
    //     if(v[j]>v[j+1])
    //         swap(v[j],v[j+1]);
    // }
    // i++;
    // recursive_bubble_sort(v, size, i);
}
int main()
{
    vector<int> v = {7,2,4,6,3,5};
    recursive_bubble_sort(v,v.size(),0,false);
    for(auto i:v)
    {
        cout<<i<<",";
    }
}