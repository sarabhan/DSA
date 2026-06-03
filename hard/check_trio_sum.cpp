#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> trio_sum(vector<int> &v, int size)
{
    sort(v.begin(), v.end());
    vector<vector<int>> list;
    for(int i=0; i<size-2; i++)
    {
        if(v[i] > 0)
            break;
        //handle duplicate eles like this
        if(i>0 && v[i]==v[i-1])
            continue;
        int left=i+1, right=size-1;
        while(left<right)
        {
            int sum = v[left] + v[right] + v[i];
            if(sum<0)
                left++;
            else if(sum>0)
                right--;
            else
            {
                list.emplace_back(vector<int>{v[i],v[left],v[right]});
                while(left < right && v[left] == v[left+1])
                    left++;
                left++;
                while(left < right && v[right] == v[right-1])
                    right--;
                right--;
            }
        }
    }
    return list;
}
int main()
{
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = trio_sum(v,v.size());
    for(auto i:result)
    {
        for(auto j:i)
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }
}