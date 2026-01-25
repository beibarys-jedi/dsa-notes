#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        for (int left = 0; left + k - 1 < nums.size(); left++) {
            int right = left + k - 1;
            diff = min(diff, nums[right] - nums[left]);
        }
        return diff;
    }
};

int main() {
    Solution solution;

    // Два теста
    vector<int> nums1{9,4,1,7};
    int k1 = 2;

    vector<int> nums2{1,3,6,19,20};
    int k2 = 2;

    cout << "Test 1 result: " << solution.minimumDifference(nums1, k1) << endl;
    cout << "Test 2 result: " << solution.minimumDifference(nums2, k2) << endl;

    return 0;
}
