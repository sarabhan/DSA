#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.emplace_back(a);
    }
    map<int,int> hashmap; //for character hashing, just use map<char,int> instead
    for(int i=0; i<n; i++)
    {
        hashmap[v[i]]++;
    }
    int q; cin>>q;
    for(int i=0; i<q; i++)
    {
        int a; cin>>a;
        cout<<hashmap[a];
    }

}