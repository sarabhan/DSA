#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selection_sort(vector<int> &v, int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min_ind = i;
        for(int j=i+1; j<size; j++)
        {
            if(v[j]<v[min_ind])
                min_ind = j;
        }
        int temp = v[i];
        v[i] = v[min_ind];
        v[min_ind] = temp;
        // auto min = min_element(v.begin()+i, v.end());
        // cout<<"min ele is "<<*min<<endl;
        // int temp = v[i]; 
        // v[i] = *min;
        // *min = temp;        
    } 
    
}
int main()
{
    vector<int> v;
    int size; 
    cout<<"enter vector size: ";
    cin>>size; 
    cout<<"enter unsorted array"<<endl;
    for(int i=0; i<size; i++)
    {
        int ele; cin>>ele;
        v.emplace_back(ele);
    }
    selection_sort(v, size);
    for(auto i:v)
    {
        cout<<(i)<<",";
    }

    return 0;
}
