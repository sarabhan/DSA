#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &v1, vector<int> &v2, int totalsize, int size1)
{
    int i = totalsize - size1 - 1; // last valid element in v1
    int j = size1 - 1;             // last element in v2
    int k = totalsize - 1;         // last position in v1

    while(i >= 0 && j >= 0)
    {
        if(v1[i] > v2[j])
        {
            v1[k] = v1[i];
            i--;
        }
        else
        {            
            v1[k] = v2[j];
            j--;
        }

        k--;
    }

    while(j >= 0)
    {
        v1[k] = v2[j];
        j--;
        k--;
    }
}
int main()
{
    vector<int> v1 = {-5, -2, 2, 3, 4, 5, 0, 0, 0};
    vector<int> v2 = {-3, 1, 8};
    merge(v1,v2,v1.size(), v2.size());
    for(auto i:v1)
    {
        cout<<i<<",";
    }
    return 0;
}