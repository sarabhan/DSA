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
            loc = mid;
        else if(v[mid])
    }
    return loc;
}
int main() 
{
    vector<int> v = {3, 4, 13, 13, 13, 20, 40};
    cout<<search(v, v.size(),0,v.size()-1, 13);
    return 0;   
}