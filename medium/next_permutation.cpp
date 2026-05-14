#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextperm(vector<int> &v, int size)
{
    int i=size-2, mindiff=INT_MAX;
    while(i>0)
    {
        if(v[i]>v[i-1])
            break;
        else
        {
            i--;
        }
    }
    for(int j=i+1; j<size; j++)
    {
        if(v[j]>v[i])
        int diff = v[j]-v[i];
        if(diff<mindiff)
            mindiff
    }

}
int main()
{
    vector<int> v = {2,1,5,4,3,0,0};
    nextperm(v,v.size());
    return 0;
}