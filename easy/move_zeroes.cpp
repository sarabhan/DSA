#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void move_zeroes(vector<int> &v, int size)
{
    int i = 0;  // position to place next non-zero

    // Step 1: copy non-zero elements forward
    for(int j = 0; j < size; j++)
    {
        if(v[j] != 0)
        {
            v[i] = v[j];
            i++;
        }
    }

    // Step 2: fill remaining positions with 0
    while(i < size)
    {
        v[i] = 0;
        i++;
    }
}
int main()
{
    vector<int> v = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    move_zeroes(v,v.size());
    for(auto i:v)
    {
        cout<<i<<",";
    }
}