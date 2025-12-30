# Lesson 2

## Arrays
When declaring an array, we specify the type of variable it should contain, its name, and its size using the syntax:

```c++
type name[size];
```

When passing them as parameters we must also pass along the size of the array. We are also unable to change the size of arrays once declared nor can we easily remove or insert elements, or copy arrays.

1. The dynamic array is a special type of array that can change size (hence the name dynamic). 
2. It also supports operations such as removing and inserting elements at any position in the list.


The C++ standard library includes a dynamic array under the name vector, an alternative name for dynamic arrays. To use it you must include the vector file by adding the line:

```c++
#include <vector>
vector<string> words;
```
To create a vector containing strings named words we write
vector<string> words;


## Problems

### Done

1. Two Sum
```cpp

```

1920. Build Array from Permutation

```cpp
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // create new array
        // loop iteration
        // return new array
        int n = nums.size();
        vector<int> ans(n);  // create new array of same size

        for (int i = 0; i < n; i++){
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};
```

3. 1470. Shuffle the Array

```cpp
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for(int i = 0; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};
```

121. Best Time to Buy and Sell Stock
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int diff = 0;

        int n = prices.size();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(prices[i] < prices[j]){
                    diff = max(diff, prices[j] - prices[i]); // fix max()
                }
            }
        }
        return diff;
    }
};
```


217. Contains Duplicate
```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        for (int i = 0; i < nums.size(); i++){
           for (int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
```
1431. Kids With the Greatest Number of Candies

```cpp
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;

        // loop
        // candies[i] + extraCandies > candies[i] return true
        // answer[i] = true    
        // answer[i] = false

                // 1) Find the max candies any kid has
        int maxCandies = 0;
        for (int c : candies) {
            if (c > maxCandies) {
                maxCandies = c;
            }
        }
        
        // 2) Build result
        for (int c : candies) {
            if (c + extraCandies >= maxCandies) {
                answer.push_back(true);
            } else {
                answer.push_back(false);
            }
        }

        return answer;
        
    }
};
```

1295. Find Numbers with Even Number of Digits
```cpp
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int i = 0;

        while (i < n) {
           int digits = 0;
            int x = nums[i];  // temp variable

            while (x != 0) {
                x = x / 10;
                digits++;
            }

            if (digits % 2 == 0) {
                count++;
            }

            i++;
        }

        return count;
    }
};
```

### In progress
88. Merge Sorted Array
1304. Find N Unique Integers Sum up to Zero 
1827. Minimum Operations to Make the Array Increasing 
 125. Valid Palindrome 
 1844. Replace All Digits with Characters 
 709. To Lower Case 
 1662. Check If Two String Arrays are Equivalent 
 771. Jewels and Stones 
 2114. Maximum Number of Words Found in Sentences 
 1528. Shuffle String 
 242. Valid Anagram 
 2500. Delete Greatest Value in Each Row 
 1572. Matrix Diagonal Sum
 1260. Shift 2D Grid 
 867. Transpose Matrix 
 766. Toeplitz Matrix 
