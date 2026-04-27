#include<iostream>
#include<vector>
using namespace std;
int count_max_consecutive_1s(vector<int> &v, int size)
{
    int i=0, maxi=0,count=0;
    while(i<size)
    {
        if(v[i]==1)
        {
            count++;
            if(count>maxi)
                maxi=count;
        }
        else
            count=0;
        i++;
    }
    return maxi;
}
int main()
{
    vector<int> v = {1, 0, 1, 1, 0, 1};
    cout<<count_max_consecutive_1s(v,v.size());
    return 0;
}