#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s; cin>>s;
    vector<int> hashmap(256,0);
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        hashmap[(s[i])]++;
    }
    int queries; cin>>queries;
    
    for(int i=0; i<queries; i++)
    {
        char a;
        cin>>a;
        cout<<hashmap[a]<<endl;
    }
}
