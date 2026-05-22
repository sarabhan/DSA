#include<iostream>
#include<vector>
using namespace std;
void edit_matrix(vector<vector<int>> &v, int col, int row)
{
    int col0=1;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(v[i][j]==0)
            {
                if(j!=0)
                {
                    v[0][j]=0; v[i][0]=0;
                }
                else
                    col0=0;
            }
        }
    }
    for(int i=1; i<row; i++)
    {
        for(int j = 1; j<col; j++)
        {
            if(v[0][j]==0 || v[i][0]==0)
                v[i][j]=0;
        }
    }
    // Step 3: first row
    if(v[0][0] == 0)
    {
        for(int j = 0; j < col; j++)
            v[0][j] = 0;
    }

    // Step 4: first column
    if(col0 == 0)
    {
        for(int i = 0; i < row; i++)
            v[i][0] = 0;
    }
}
int main()
{
    vector<vector<int>> v = {{1,1,1,1},{1,0,1,1},{1,0,0,1},{0,1,1,1}};
    edit_matrix(v, v.size(), v[0].size());
    for(int i=0; i<v[0].size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}