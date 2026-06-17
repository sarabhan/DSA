#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> finding(vector<int> &v, int size)
{
    vector<int> final;
    int count=0, breakpoint1=0, breakpoint2=0, sum=0;
    int realsum = ((size+1)*size/2);
    for(int i=1; i<size; i++)
    {
        sum = sum+v[i];
        if(v[i-1]<v[i] && abs(v[i-1]-v[i])!=1)
        {
            if(v[i-1]!=breakpoint1 && v[i-1]!=breakpoint2)
                breakpoint1 = v[i-1];
        }
        if((v[i-1]>v[i]) && abs(v[i-1]-v[i])!=1)
        {
            if(v[i]!=breakpoint2 && v[i]!=breakpoint1)
                breakpoint2 = v[i];
        }
    }
    sum = sum+v[0];
    int missing = (breakpoint1 + breakpoint2)/2;
    int rep = sum-realsum+missing;
    final.emplace_back(missing);
    final.emplace_back(rep);
    return final;
}
int main()
{
    vector<int> v = {1, 2, 3, 6, 7, 5, 7};
    vector<int> final = finding(v,v.size());
    for(auto i:final)
    {
        cout<<i<<",";
    }
    return 0;
}