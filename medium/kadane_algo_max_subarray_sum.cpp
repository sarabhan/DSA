#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_map>
using namespace std;
int kadane_algo(vector<int> &v, int size)
{
    int sum=v[0],maxsum=v[0];
    for(int i=1; i<size; i++)
    {
        sum = max(v[i], sum + v[i]);
        if(sum>maxsum)
            maxsum=sum;
        cout<<"sum is = "<<sum<<endl;
    }
    return maxsum;
}
int find_max_sum(vector<int> &v, int size) 
{ 
    int sum=0,maxsum=INT_MIN; //TO CONSIDER -ve sums too
    for(int i=0; i<size; i++) 
    { 
        sum = sum+v[i]; 
        cout<<"sum is = "<<sum<<endl;
        if(sum>maxsum) //TO CONSIDER -ve sums too
            maxsum=sum; 
        if(sum<=0)
            sum=0;
    } 
    return maxsum;
}
int print_max_sum_subarray(vector<int> &v, int size) 
{ 
    int sum = 0, maxsum = INT_MIN;

    int start = 0;        // temp start
    int ansStart = 0;     // final start
    int ansEnd = 0;       // final end

    for(int i = 0; i < size; i++) 
    { 
        sum += v[i];
        cout << "sum is = " << sum << endl;

        // update best answer
        if(sum > maxsum) 
        {
            maxsum = sum;
            ansStart = start;
            ansEnd = i;
        }

        // reset condition (your logic)
        if(sum <= 0)
        {
            sum = 0;
            start = i + 1;   // next index becomes new start
        }
    } 

    // print subarray
    cout << "Subarray: ";
    for(int i = ansStart; i <= ansEnd; i++)
        cout << v[i] << " ";

    cout << endl;

    return maxsum;
}
int main()
{
    vector<int> v = {-2, -3, -7, -2, -10, -4};
    cout<<find_max_sum(v,v.size());
    return 0;
}