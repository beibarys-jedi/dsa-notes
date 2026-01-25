# Lesson 1 - Two pointers, Sliding window

## Two Pointers Method

In the two pointers method, two pointers are used to iterate through the array
values. Both pointers can move to one direction only, which ensures that the
algorithm works efficiently.


The two pointers method iterates two pointers across an array, to track the start and end of an interval, or two values in a sorted array that we are currently checking. Both pointers are monotonic; meaning each pointer starts at one end of the array and only move in one direction.

Implementation below:

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, T;
	cin >> N >> T;
	vector<int> A(N);
	for (int &a : A) cin >> a;

	int r = -1, sum = 0, ans = 0;
	// sum stores sum of A[l ... r inclusive]
	for (int l = 0; l < N; sum -= A[l++]) {
		while (r + 1 < N && sum + A[r + 1] <= T) sum += A[++r];
		ans = max(ans, r - l + 1);
	}
	cout << ans << "\n";
}
```

Time Complexity - O(N).


## Sliding window minimum
A sliding window is a constant-size subarray that moves from left to right
through the array. At each window position, we want to calculate some information about the elements inside the window. 




# Run project
below simple command lines with compilation

```shell
clang++ main.cpp -o main
./main
hello
```

## Homework
 
88. Merge Sorted Array
167. Two Sum II - Input Array Is Sorted
1984. Minimum Difference Between Highest and Lowest of K Scores
1695. Maximum Erasure Value 
1423. Maximum Points You Can Obtain from Cards 
1004. Max Consecutive Ones III 
424. Longest Repeating Character Replacement 
1456. Maximum Number of Vowels in a Substring of Given Length 
930. Binary Subarrays With Sum 
438. Find All Anagrams in a String
904. Fruit Into Baskets
239. Sliding Window Maximum
2410. Maximum Matching of Players With Trainers
2332. The Latest Time to Catch a Bus
76. Minimum Window Substring

