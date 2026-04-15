#include<iostream>
#include<vector>
using namespace std;
int second_large_n_smallest(vector<int> &v, int size)
{
    int secondmax = v[0], secondmin = v[0];
    for(int i=1; i<size; i++)
    {
        if(v[i]>secondmax)
            secondmax=v[i];
        if(v[i]<secondmin)
            secondmin=v[i];
    }
    return secondmax,secondmin;
}
int main()
{
    vector<int> v = {8, 10, 5, 7, 9};
    if(v.size()<3)
        return -1;
    else
    {
        int secondmax, secondmin = second_large_n_smallest(v, v.size());
        cout<<"second largest ele is "<<secondmax<<endl;
        cout<<"second smallest ele is "<<secondmin;
        return 0;
    }
}