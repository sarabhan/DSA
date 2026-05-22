#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int longestseq(vector<int> &v, int size)
{
    //v = [0,3,7,2,5,8,4,6,0,1]
    if(size==0) return 0;
    int longest = 1;
    unordered_set<int> us;
    for(int i=0; i<size; i++)
        us.insert(v[i]);
    for(auto i:us)
    {
        if(us.find(i-1)==us.end())
        {
            int cnt=1,x=i;
            while(us.find(x+1)!=us.end())
            {
                x++;
                cnt++;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;

}
int main()
{
    vector<int> v = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout<<longestseq(v,v.size());
    return 0;
}