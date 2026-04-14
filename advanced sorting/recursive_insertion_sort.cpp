#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void recursive_insertion_sort(vector<int> &v, int i, int j,int size) 
{ 
    if(i==size) return; 
    if(j>0 && v[j]<v[j-1])
    {
        swap(v[j],v[j-1]);
        recursive_insertion_sort(v,i,j-1,size);
    }
    else    
        recursive_insertion_sort(v,i+1,i+1,size); 
}

int main()
{
    vector<int> v = {7,2,4,6,3,5};
    recursive_insertion_sort(v, 0, 0, v.size());
    for(auto i:v)
    {
        cout<<i<<",";
    }
}