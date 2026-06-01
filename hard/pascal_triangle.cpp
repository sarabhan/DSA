#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long pascal(int r, int c)
{
    r = r-1;
    c = c-1;
    c = min(c,r-c); //as pascal's triangle is symmetrical, we dont need to calculate the 2nd half
    long long prev=1;
    for(int i=1; i<=c; i++)
    {
        prev = prev*(r-i+1)/i;
    }
    return prev;
}
int main()
{
    cout<<pascal(5,3);
    return 0;
}