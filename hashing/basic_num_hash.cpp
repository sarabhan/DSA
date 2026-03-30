#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,a; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
    vector<int> hashmap(n,0);
    for(int i=0; i<n; i++)
    {
        hashmap[(v[i])]++;
    }
    int queries;
    cin>>queries;
    for(int i=0; i<queries; i++)
    {
        cin>>a;
        cout<<hashmap[a]<<endl;
    }
    
    return 0;
}