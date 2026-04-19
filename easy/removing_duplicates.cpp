#include<iostream>
#include<vector>
using namespace std;
int og_size(vector<int> &v, int i)
{
    // -------------------NORMAL APPROACH---------------
    // if(i >= v.size()-1)
    //     return;
    // if(v[i]==v[i+1])
    // {
    //     v.erase(v.begin()+i+1);
    //     return og_size(v, i);
    // }
    // return og_size(v,i+1);
    //--------------------BEST METHOD-------------------
    int j=0;
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]!=v[j])
        {
            j++;
            v[j]=v[i];
        }
    }
    return j+1;

}
int main()
{                   
    vector<int> v = {1,1,2,2,2,3,3};
    cout<<og_size(v,0);
}