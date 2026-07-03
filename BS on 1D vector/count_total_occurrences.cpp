#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> &v, int size, int low, int high, int num, bool flag)
{
    int loc=-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(v[mid]==num)
        {
            loc = mid;
            if(flag)
                high = mid-1;
            else
                low = mid+1;
        }
        else if(v[mid]>num)
            high = mid-1;
        else
            low = mid+1;
    }
    return loc;
}
// int findfirst(vector<int> &v, int size, int low, int high, int num)
// {
//     int loc=-1;
//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         if(v[mid]==num)
//         {
//             loc = mid;
//             high = mid-1;
//         }
//         else if(v[mid]>num)
//             high = mid-1;
//         else
//             low = mid+1;
//     }
//     return loc;
// }
// int findlast(vector<int> &v, int size, int low, int high, int num)
// {
//     int loc=-1;
//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         if(v[mid]==num)
//         {
//             loc = mid;
//             low = mid+1;
//         }
//         else if(v[mid]>num)
//             high = mid-1;
//         else
//             low = mid+1;
//     }
//     return loc;
// }
int totaloccurrences(int start, int end)
{
    return end-start+1;
}
int main() 
{
    vector<int> v = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int start = find(v, v.size(),0,v.size()-1, 5, true);
    if(start==-1)
    {
        cout<<"number doesnt exist";
        return 0;
    }
    int end = find(v, v.size(),0,v.size()-1, 5, false);
    // int start = findfirst(v, v.size(),0,v.size()-1, 5);
    // if(start==-1)
    // {
    //     cout<<"number doesnt exist";
    //     return 0;
    // }
    // int end = findlast(v, v.size(),0,v.size()-1, 5);
    cout<<totaloccurrences(start,end);
    return 0;   
}