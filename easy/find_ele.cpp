#include<iostream>
#include<vector>
using namespace std;
int find_ele(vector<int> &v, int size, int ele)
{
    for(int i=0; i<size; i++)
    {
        if(v[i]==ele)
            return i;
    }
    return -1;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    int ele=3; 
    cout<<find_ele(v, v.size(),ele);
    return 0;
}