#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void rotate(vector<int> &v, int k, string direction)
{
    if(direction =="right")
    {
        //reverse whole vect
        reverse(v.begin(),v.end());
        //reverse before k
        reverse(v.begin(),v.begin()+k);
        //reverse after
        reverse(v.begin()+k,v.end());
    }
    else
    {
        //reverse before
        reverse(v.begin(),v.begin()+k);
        //reverse after k
        reverse(v.begin()+k,v.end());
        //reverse whole vect
        reverse(v.begin(),v.end());

    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    string direction = "left";
    rotate(v,k,direction);
    for(auto i:v)
    {
        cout<<i<<",";
    }
}