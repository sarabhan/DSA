#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> st = {1,10,100};
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);
    auto i = st.find(100);
    st.erase(i);
    auto a = st.lower_bound(50);
    cout<<*a;    
    return 0;
}