#include<iostream>
#include<vector>
using namespace std;
void findleaders(vector<int> &v, int size)
{
    int leader = v[size-1];
    cout<<leader<<" ";
    for(int i=size-2; i>=0; i--)
    {
        if(v[i]>leader)
        {
            leader = v[i];
            cout<<leader<<" ";
        }
    }
}
int main()
{
    vector<int> v = {10,22,12,3,0,6};
    findleaders(v,v.size());
}