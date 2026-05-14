#include<iostream>
#include<vector>
using namespace std;
vector<int> sort_negative(vector<int> &v, int size)
{
    vector<int> final(size);
    int i=0, j=1; 
    for (int k=0; k<size; k++)
    {
        if(v[k]<0)
        {
            final[j] = v[k];
            j=j+2;
        }
        else
        {
            final[i] = v[k];
            i=i+2;
        }
    }
    return final;
}

int main()
{
    vector<int> v = {1,2,-3,-1,-2,3};
    vector<int> final = sort_negative(v,v.size());
    for(auto i:final)
    {
        cout<<i<<",";
    }

    return 0;
}