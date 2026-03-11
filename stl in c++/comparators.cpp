#include<iostream>
#include<algorithm> 
using namespace std;
//comparator must be boolean always
bool comp(pair<int,int> p1, pair<int, int> p2)
{
    if(p1.second<p2.second)
        return true;
    if(p1.second>p2.second)
        return false;
    else
    {
        if(p1.first>p2.first)
            return true;
        else
            return false;
    }
    
}
int main()
{
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    sort(a, a+3, comp);
    for(auto &i:a)
    {
        cout<<i.first<<","<<i.second<<endl;
    }
    return 0;
    //sort by 2nd element in pair ascending order
    //if both 2nd eles are same, then sort by 1st ele in desc order
}