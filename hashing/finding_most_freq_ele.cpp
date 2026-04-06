#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v;
    map<int,int> hashmap;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        v.emplace_back(a);
        hashmap[v[i]]++;
    }
    int maxFreq = 0;
    int key = -1;   // to store element with max frequency

    for(auto &p : hashmap)
    {
        if(p.second > maxFreq)
        {
            maxFreq = p.second;
            key = p.first;   // store the key
        }
    }

    cout << key << endl;

}