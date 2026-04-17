#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// ----------------------BASIC APPROACH-----------------
// pair<int,int> second_large_small(vector<int> &v, int size)
// {
//     for(int i=0; i<size-1; i++)
//     {
//         for(int j=0; j<size-i-1; j++)
//         {
//             if(v[j]>v[j+1])
//                 swap(v[j],v[j+1]);
//         }
//     }
//     int secondmin = v[1];
//     int secondmax = v[size-2];
//     return {secondmax,secondmin};
// }
//---------------------bEST APPROACH--------------------
pair<int,int> second_large_n_smallest(vector<int> &v)
{
    //INT_MAX → largest possible int = 2147483647   (2^31 - 1)
    //INT_MIN → smallest possible int = -2147483648  (-2^31)
    // these are already pre-defined in c++
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for(int x : v)
    {
        // ---- Handle largest & second largest ----
        if(x >= largest)
        {
            if(x != largest)
            {
                secondLargest = largest;
                largest = x;
            }
        }
        else if(x > secondLargest)
        {
            secondLargest = x;
        }

        // ---- Handle smallest & second smallest ----
        if(x <= smallest)
        {
            if(x != smallest)
            {
                secondSmallest = smallest;
                smallest = x;
            }
        }
        else if(x < secondSmallest)
        {
            secondSmallest = x;
        }
    }
    return {secondLargest,secondSmallest};

}
int main()
{

    int secondmax,secondmin;
    vector<int> v = {8, 10, 5, 7, 9};
    if(v.size()<3)
        return -1;
    // 🔥 Call the function (no assignment!)
    pair<int,int> p = second_large_n_smallest(v);
    cout<<"second largest number is "<<p.first<<endl;
    cout<<"second smallest number is "<<p.second;
    return 0;

}