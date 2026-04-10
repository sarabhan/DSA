#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insertion_sort(vector<int> &v, int size)
{
    for(int i=1; i<size; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(v[j]<v[j-1])
            {
                //swap(v[j],v[j-1]);
                int temp;
                temp=v[j];
                v[j]=v[j-1];
                v[j-1]=temp;
                
            }
            else
                break;
        }
    }
}
int main()
{
    int size; 
    cout<<"enter vector size: "; cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++)
    {
        int a; cin>>a;
        v.emplace_back(a);
    }
    insertion_sort(v, size);
    for(auto i:v)
    {
        cout<<i<<",";
    }
}