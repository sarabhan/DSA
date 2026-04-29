#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check_pair_sum(vector<int> &v,  int size, int getsum)
{
    // initial v = {2,6,5,8,11}
    // sorted v = {2,5,6,8,11}
    sort(v.begin(),v.end());
    for(int i=0; i<size; i++)
    {
        int j=i+1;
        int diff = getsum-v[i];
        while(j<size)
        {
            
            if(diff==v[j])
                return 1;
            j++;
        }

    }
    return 0;
}
int main()
{
    vector<int> v = {2,6,5,8,11};
    int flag = check_pair_sum(v,v.size(),15);
    if(flag==0)
        cout<<"no";
    else
        cout<<"yes";
}