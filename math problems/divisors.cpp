#include<iostream>
#include<list> //can use vector also
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>l;
    for(int i=1; i<=int(sqrt(n)); i++)
    {
        int rem=n%i;
        int quo=n/i;
        if(rem==0)
            {
                l.emplace_back(i);
                if(quo!=i)
                    l.emplace_back(quo);
            }
        
    }
    l.sort();
    for(auto i = l.begin(); i!=l.end(); i++)
    {
        cout<<*(i)<<",";
    }
}