#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> &v, int size)
{
    for(int i=0; i<size-1; i++)
    {
        bool swapped = false;
        for(int j=0; j<size-i-1; j++)
        {
            //can use stl too
            if(v[j]>v[j+1])
            {
                int temp;
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                swapped=true;
                
            }
        }
        if(!swapped) break; //stop early if sorted
    }
}


int main()
{
    int size; 
    cout<<"enter vector size: ";
    cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++)
    {
        int a; cin>>a;
        v.emplace_back(a);
    }
    bubble_sort(v, size);
    for(auto i:v)
    {
        cout<<i<<",";
    }
}