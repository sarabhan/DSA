#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findlargest(vector<int> &v, int size)
{
    //do the 1st iteration of bubble sort
    // for(int i=0; i<size-1; i++)
    // {
    //     for(int j=size-i-1; j>0; j--)
    //     {
    //         if(v[j-1]>v[j])
    //             swap(v[j],v[j-1]);
    //     }
    // }

    // good conceptual application. has same time complexity as best solution
    //  but does swapping unnecessarily. 
    // for(int j=0; j<size-1; j++)
    // {
    //     if(v[j]>v[j+1])
    //         swap(v[j],v[j+1]);
    // }
    // return v.back();

    // this is the way
    int max = v[0]; //assume 1st ele as max
    for(int j=1; j<size; j++)
    {
        if(v[j]>max)
            max = v[j];
    }
    return max;
}
int main()
{
    vector<int> v = {8, 10, 5, 7, 9};
    int max = findlargest(v, v.size());
    cout<<"largest ele is "<<max;
}