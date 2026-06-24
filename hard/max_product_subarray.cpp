#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxproduct(vector<int> &v, int size)
{
    int maxproduct=v[0],minproduct = v[0], result = v[0];
    int i=1;
    
    while(i<size)
    {
        if(v[i]<0)
            swap(minproduct, maxproduct);
        maxproduct = max(v[i], maxproduct*v[i]);
        minproduct = min(v[i], minproduct*v[i]);

        result = max(result, maxproduct);
        i++;       
    }
    return result;

}
int main()
{
    vector<int> v = {1,2,-3,0,-4,-5};
    cout<<maxproduct(v,v.size());
    return 0;
}