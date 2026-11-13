#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// private:
//     bool canFinish(vector<int>& piles, int speed, int h) {
//         long long hours = 0;

//         for (int pile : piles) {
//             hours = hours + (pile + speed - 1) / speed;
//             if (hours > h) {
//                 return false;
//             }
//         }
//         return hours <= h;
//     }

// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low = 1;
//         int high = *max_element(piles.begin(), piles.end());
//         while (low < high) {
//             int mid = low + (high - low) / 2;
//             if (canFinish(piles, mid, h)) {
//                 high = mid;
//             } else {
//                 low = mid + 1;
//             }
//         }
//         return low;
//     }
// };


bool canFinish(vector<int>& v, int speed, int h) {
    long long hours = 0;

    for (int i : v) {
        hours = hours + (i + speed - 1) / speed;
        if (hours > h) 
            return false;
    }
    return hours <= h;
}

int minEatingSpeed(vector<int>& v, int h) {
    int low = 1;
    int high = *max_element(v.begin(), v.end());
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (canFinish(v, mid, h)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}


// Driver code starts
int main() 
{
    vector<int> v = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}