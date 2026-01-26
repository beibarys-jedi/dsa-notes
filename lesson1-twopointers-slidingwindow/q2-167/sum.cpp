#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int sum = nums[l] + nums[r];

            if (sum < target) {
                l++;
            } else if (sum > target) {
                r--;
            } else {
                // LeetCode expects 1-based indices
                return {l + 1, r + 1};
            }
        }

        return {}; // на случай, если не найдено
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {2, 7, 11, 15};
    int target = 9;

    vector<int> res = solution.twoSum(nums1, target);

    if (!res.empty()) {
        cout << "Result: " << res[0] << " " << res[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
