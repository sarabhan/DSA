#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//this has the optimal time complexity O(n), but not the optimal space complexity O(n)
// int find_majority(vector<int> &v, int size)
// {
//     unordered_map<int,int> um;
//     for(int i=0; i<size;i++)
//     {
//         um[v[i]]++;
//         if(um[v[i]]>size/2)
//             return v[i];
//     }
//     return -1;
// }

//this is a method with 2o(n) time complexity, rounded off to o(n)
// and o(1) space complexity
// int find_majority(vector<int> &v, int size)
// {
//     int count=1, majority=v[0];
//     for(int i=1; i<size; i++)
//     {
//         if(v[i]==majority)
//             count++;
//         else
//         {
//             count--;
//             if(count==0)
//             {
//                 majority=v[i];
//                 count=1;
//             }
//         }
//     }
//     // Step 2: Verify actual frequency
//     int freq = 0;
//     for(int x : v)
//     {
//         if(x == majority)
//             freq++;
//     }

//     if(freq > size/2)
//         return majority;
//     else
//         return -1;
// }

///this is the optimal one
int find_majority(vector<int> &v)
{
    int count = 0, majority = 0;

    for(int x : v)
    {
        if(count == 0)
            majority = x;

        count += (x == majority) ? 1 : -1;
    }

    return majority;
}

int main()
{
    vector<int> v = {7, 0, 0, 1, 7, 7, 2, 7, 7};//{1,1,2,3,4,5,6,7};
    cout<<find_majority(v,v.size()); 
}