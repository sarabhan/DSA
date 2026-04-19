#include<iostream>
#include<vector>
using namespace std;
bool check_ascending(vector<int> &v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i]>v[i+1])
            return false;
    }
    return true;
}
int main()
{
    vector<int> v = {4,5,6,7,8,3};
    cout<<check_ascending(v);
}