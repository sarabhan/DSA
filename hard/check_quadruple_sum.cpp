#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> quadruple_sum(vector<int> &v, int size,int getsum)
{
    sort(v.begin(), v.end());
    vector<vector<int>> list;
    for(int i=0; i<size-3; i++)
    {
        //handle duplicate eles like this
        if(i>0 && v[i]==v[i-1])
            continue;
        for(int j=i+1; j<size-2; j++)
        {
            if(j>i+1 && v[j]==v[j-1])
                continue;
            int left=j+1, right=size-1;
            while(left<right)
            {
                long long sum = (long long)v[left] + v[right] + v[i] + v[j];
                if(sum<getsum)
                    left++;
                else if(sum>getsum)
                    right--;
                else
                {
                    list.emplace_back(vector<int>{v[i],v[j],v[left],v[right]});
                    while(left < right && v[left] == v[left+1])
                        left++;
                    left++;
                    while(left < right && v[right] == v[right-1])
                        right--;
                    right--;
                }
            }
        }  
    }
    return list;
}
int main()
{
    vector<int> v = {1,0,-1,0,-2,2};
    vector<vector<int>> result;
    result = quadruple_sum(v, v.size(),0);
    for(auto i:result)
    {
        for(auto j:i)
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }
}