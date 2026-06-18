#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> finding(vector<int> &v, long long size)
{
        // Sum of first n natural numbers
        long long sum = (size * (size + 1)) / 2;
        
        // Sum of squares of first n natural numbers
        long long squaresum = (size * (size + 1) * (2 * size + 1)) / 6;

        /*Calculate actual sum (S) and sum 
        of squares (S2) of array elements*/
        long long real_sum = 0, real_squaresum = 0;
        for (int i = 0; i < size; i++) 
        {
            real_sum += v[i];
            real_squaresum += (int)v[i] * (int)v[i];
        }

        //Compute the difference values
        long long val1 = real_sum - sum; 
        
        // S2 - S2n = X^2 - Y^2
        long long val2 = real_squaresum - squaresum; 

        //Calculate X + Y using X + Y = (X^2 - Y^2) / (X - Y)
        val2 = val2 / val1;

        /* Calculate X and Y from X + Y and X - Y
         X = ((X + Y) + (X - Y)) / 2
         Y = X - (X - Y)*/
        long long x = (val1 + val2) / 2;
        long long y = x - val1;

        // Return the results as {repeating, missing}
        return {(int)x, (int)y};
}
int main()
{
    vector<int> v = {1, 2, 3, 6, 7, 5, 7};
    vector<int> final = finding(v,v.size());
    for(auto i:final)
    {
        cout<<i<<",";
    }
    return 0;
}