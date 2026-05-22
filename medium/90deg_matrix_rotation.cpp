#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>> &v, int size)
{
    vector<vector<int>> newv(size, vector<int>(size,0)); 
    for(int j=0; j<size; j++)
    {
        for(int i=0; i<size; i++)
        {
            newv[i][j]=v[j][i];
        }
        
    }
}
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(v, v.size())
}