# Introduction

## Example 1
You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k.

Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized.

Return the minimum possible difference.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

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

```

Run command

```shell
 clang++ sum.cpp -o sum
 ./sum
 ```

 ## Example 2

 