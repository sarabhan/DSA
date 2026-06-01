#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralprint(vector<vector<int>> &v, int row, int col)
{
    vector<int> spiral;
    int top=0, bottom=row-1, left=0, right=col-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left; i<=right; i++)
            spiral.emplace_back(v[top][i]);
        top++;
        
        for(int i=top; i<=bottom; i++)
            spiral.emplace_back(v[i][right]);
        right--;
        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
                spiral.emplace_back(v[bottom][i]);
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom; i>=top; i--)
                spiral.emplace_back(v[i][left]);
            left++;
        }
    }
    return spiral;
}
int main()
{
    vector<vector<int>> v = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }; 
    int row = v.size(), col=v[0].size();
    vector<int> final = spiralprint(v,row,col);
    for(auto i:final)
    {
        cout<<i<<",";
    }
    return 0;
}