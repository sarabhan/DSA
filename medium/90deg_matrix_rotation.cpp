#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>> &v, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    for (int i=0; i<size; ++i) 
    {
        reverse(v[i].begin(), v[i].end());
    }
}
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = v.size();
    rotate(v, size);
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
