# Introduction

## 167 two-sum-ii-input-array-is-sorte

Link to problem is below
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

```cpp
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
clang++ sum.cpp -std=c++17 -o sum
 ./sum
 ```

 ## Example 2

 