#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int longest_with_sum_0(vector<int> &v, int size)
{
    int sum=0, maxlen=0;
    map<int,int> m; 
    for(int i=0; i<size; i++)
    {
        sum = v[i]+sum;
        if(sum==0)
            maxlen = max(maxlen, i+1);
        else
        {
            if (m.find(sum) != m.end()) 
                maxlen = max(maxlen, i-m[sum]);
            else
            {
                m[sum] = i;
            }
        }
    }
    return maxlen;
}
int main()
{
    vector<int> v = {6, -2, 2, -8, 1, 7, 4, -10};
    cout<<longest_with_sum_0(v, v.size());
    return 0;
}