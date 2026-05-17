#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextperm(vector<int> &v, int size)
{
    int i=size-2, mindiff=INT_MAX, pivot;
    while(i>=0)
    {
        if(v[i]<v[i+1])
            break;
        else
            i--;
    }
    if(i<0)
    {
        sort(v.begin(),v.end());
        return;
    }
    else
    {
        for(int j=i+1; j<size; j++)
        {
            if(v[j]>v[i])
            {
                int diff = v[j]-v[i];
                if(diff<mindiff)
                {
                    mindiff=diff;
                    pivot = j;
                }
                    
            } 
        }
        swap(v[i],v[pivot]);
        reverse(v.begin()+i+1, v.end()); 
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 6, 5, 4};
    nextperm(v,v.size());
    for(auto i:v)
    {
        cout<<i<<",";
    }
    return 0;
}