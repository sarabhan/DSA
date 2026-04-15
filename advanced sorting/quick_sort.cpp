#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sortpivot(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i=low+1, j=high;
    while(1)
    {
        while(v[i]<=pivot && i<high)
            i++;
        while(v[j]>pivot && j>low)
            j--;
        if(i<j)
            swap(v[i],v[j]);
        else
            break;
    }
    swap(v[j],v[low]);
    return j; //index of sorted pivot
}
void quicksort(vector<int> &v, int low, int high)
{
    if(low<high) //ensure we dont sort single ele i.e. low = high
    {
        int sortedpivot = sortpivot(v,low,high);
        quicksort(v,low,sortedpivot-1);
        quicksort(v,sortedpivot+1,high);
    }
}
int main()
{
    vector<int> v = {4,6,2,5,7,9,1,3};
    quicksort(v,0,v.size()-1);
    for(auto i:v)
    {
        cout<<i<<",";
    }
}