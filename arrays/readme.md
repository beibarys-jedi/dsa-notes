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


### In progress

88. Merge Sorted Array
121. Best Time to Buy and Sell Stock
217. Contains Duplicate
1431. Kids With the Greatest Number of Candies
1295. Find Numbers with Even Number of Digits
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
