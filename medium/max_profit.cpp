#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int> &v, int size)
{
    int i=0, maxprofit=0, profit=0, j=1;
    while(j<size)
    {
        if(v[i]>=v[j])
        {
            i=j; 
            j=i+1;
        }
        else
        {
            profit = v[j]-v[i];
            if(profit>maxprofit)
                maxprofit=profit;
            j++;
        }
    }
    return maxprofit;
}
int main()
{
    vector<int> v = {7,2,3,1,6,4};
    cout<<max_profit(v, v.size());
    return 0;
}