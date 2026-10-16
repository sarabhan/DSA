#include<iostream>
#include<vector>
// #include<cmath>
using namespace std;
int findsqrt(int target)
{
    int low=0, high=target;
    while(low<high)
    {
        int mid = low+(high-low)/2;
        if(pow(mid,2)<target)
            low = mid+1;
        else if(pow(mid,2)>target)
            high = mid;
        else
            return mid;
    }
}
int main()
{
    cout<<findsqrt(49);
}