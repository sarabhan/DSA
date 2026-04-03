#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s; cin>>s;
    vector<int> hashmap(26,0);
    for(int i=0; i<s.length(); i++)
    {
        hashmap[(s[i]-'a')]++;
    }
    int queries; cin>>queries;
    
    for(int i=0; i<queries; i++)
    {
        char a;
        cin>>a;
        cout<<hashmap[a - 'a']<<endl;
    }
}
