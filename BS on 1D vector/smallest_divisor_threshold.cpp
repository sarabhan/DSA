#include<iostream>
#include <vector>
using namespace std;

bool canDivideWithinThreshold(vector<int>& nums, int divisor, int threshold)
{
    long long total = 0;
    for (int num : nums)
    {
        total += (num + divisor - 1LL) / divisor;
        if (total > threshold)
            return false;
    }
    return true;
}

int smallestDivisor(vector<int>& nums, int threshold)
{
    long long totalSum = 0;
    int high = 0;

    for (int num : nums)
    {
        totalSum += num;
        high = max(high, num);
    }
    if (threshold >= totalSum)
        return 1;
    if (threshold == nums.size())
        return high;
    int low = 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (canDivideWithinThreshold(nums, mid, threshold))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}