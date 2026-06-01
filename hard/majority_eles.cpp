#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> majority(vector<int> &v, int size)
{
    int majority1 = 0, count1=0;
    int majority2 = 1, count2=0;
    for(int i=0; i<size; i++)
    {
        if(v[i]==majority1)
        {
            count1++;
        }
        else if(v[i]==majority2)
        {
            count2++;
        }
        else
        {
            if(count1==0)
            {
                majority1=v[i];
                count1=1;
            }
            else if(count2==0)
            {
                majority2=v[i];
                count2=1;
            }
            else
            {
                count1--;count2--;
            }
        }
    }
    // Verification
    count1 = 0;
    count2 = 0;

    for(int i = 0; i < size; i++)
    {
        if(v[i] == majority1)
            count1++;
        else if(v[i] == majority2)
            count2++;
    }

    vector<int> ans;

    if(count1 > size/3)
        ans.push_back(majority1);

    if(count2 > size/3)
        ans.push_back(majority2);

    return ans;
}
int main()
{
    vector<int> v = {1,2,2,3,2,1,1};
    vector<int>ans = majority(v, v.size());
    for(auto i:ans)
    {
        cout<<i<<",";
    }
    return 0;
}