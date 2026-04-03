#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a; 
    cout<<"enter number of eles you want to hash: ";
    cin>>n;
    vector<int> v;
    cout<<"enter numbers"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
    int maxi = *max_element(v.begin(), v.end());
    vector<int> hashmap(maxi + 1, 0);
    for(int i=0; i<n; i++)
    {
        hashmap[(v[i])]++;
    }
    cout<<"enter no. of queries for hashing: ";
    int queries;
    cin>>queries;
    cout<<"enter queries"<<endl;
    for(int i=0; i<queries; i++)
    {
        if(a <= maxi)
            cout << hashmap[a] << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}