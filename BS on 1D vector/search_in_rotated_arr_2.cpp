#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &v, int size, int low, int high, int num)
{
}
int main() 
{
    vector<int> v = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    cout<<search(v, v.size(),0,v.size()-1, 3);
    return 0;   
}