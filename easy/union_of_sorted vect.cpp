#include<iostream>
#include<vector>
using namespace std;
void union_vect(vector<int> &v1, vector<int> &v2, vector<int> &final)
{
    int i = 0, j = 0;
    // run until either ptr reaches the end
    while(i < v1.size() && j < v2.size())
    {
        if(v1[i] < v2[j])
        {
            //add only if vector is empty or last ele isnt the same
            if(final.empty() || final.back() != v1[i])
                final.emplace_back(v1[i]);
            i++;
        }
        else if(v1[i] > v2[j])
        {
            //add only if vector is empty or last ele isnt the same
            if(final.empty() || final.back() != v2[j])
                final.emplace_back(v2[j]);
            j++;
        }
        else
        {
            //add only if vector is empty or last ele isnt the same
            if(final.empty() || final.back() != v1[i])
                final.emplace_back(v1[i]);
            i++; j++;
        }
    }

    // adding leftover eles
    if(i<v1.size())
    {
        while(i < v1.size())
        {
            if(final.empty() || final.back() != v1[i])
                final.emplace_back(v1[i]);
            i++;
        }
    }
    else if(j<v2.size())
    {
        while(j < v2.size())
        {
            if(final.empty() || final.back() != v2[j])
                final.emplace_back(v2[j]);
            j++;
        }
    }

}
int main()
{
    vector<int> v1 = {1,2,3,4,5}, v2 = {2,3,4,4,5};
    vector<int> final;
    union_vect(v1, v2, final);
    for(auto i:final)
    {
        cout<<i<<",";
    }
}