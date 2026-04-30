#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort_vector(vector<int> &v, int size)
{
    // 0 to low-1 for 0s
    // low to mid-1 for 1s
    // mid to size-1 for 2s
    
}
int main()
{
    vector<int> v= {1, 0, 2, 1, 0};
    sort_vector(v,v.size());
    for(auto i:v)
    {
        cout<<i<<",";
    }
}