#include<iostream>
#include<vector>
using namespace std;
pair<int,int> floorceiling(vector<int> &v, int size, int low, int high, int num)
{
    int floor=-1, ceiling=-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(v[mid]<num)
        {
            floor= v[mid];
            low = mid+1;
        }
        else if(v[mid]>num)
        {
            ceiling = v[mid];
            high = mid-1;
        }
        else 
            return {v[mid],v[mid]};
    }
    return {floor,ceiling};
}
int main() 
{
    vector<int> v = {3, 4, 4, 7, 8, 10};
    pair<int,int> p = floorceiling(v, v.size(),0,v.size()-1, 5);
    cout<<"floor is: "<<p.first<<","<<"ceiling is: "<<p.second;
    return 0;   
}


