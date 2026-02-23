#include<iostream>
#include<vector> 
using namespace std;

int main()
{
    // int n;
    // cout << "enter a number for looping = ";
    // cin >> n;
    // for (int i=0; i<n; i++)
    // {
    //     cout<<"i have forgotten c++ syntax"<<endl;
    // }
    int rows, cols;
    cout<<"today we're going to create a matrix.\n enter the no.of.rows = "<<endl;
    cin>>rows;
    cout<<"now enter no.of.cols = "<<endl;
    cin>>cols;
    vector<vector<int>> matrix(rows, vector<int>(cols,0));
    for (int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>matrix[i][j];
        }
    }
    for (int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}