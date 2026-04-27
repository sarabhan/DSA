#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int find_missing(vector<int> &v, int size)
{
    //the idea is the find the dirfference between ideal sum and actual sum
    //an array of size = n-1 would have elements upto n
    // size = 7, max = 8
    //ideal sum = max(max+1)/2
    //ideal_sum = (size+1)*(size+2)/2
    //surrent sum = 
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=v[i]+sum;
        cout<<"sum = "<<sum<<endl;
    }
    int ideal_sum = ((size+1)*(size+2)/2);
    int missing = ideal_sum - sum ;
    cout<<"ideal_sum is "<<ideal_sum<<endl;
    cout<<"current sum is "<<sum<<endl;
    return missing;
}
int main()
{
    vector<int> v = {8, 2, 4, 5, 3, 7, 1};
    cout<<find_missing(v,v.size());

}