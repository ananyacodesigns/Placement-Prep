//KADANE ALGORITHM

/*

Given an integer array nums, find the
subarray
with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

 

Constraints:

    1 <= nums.length <= 105
    -104 <= nums[i] <= 104

 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.


This code is an implementation of an algorithm to solve the problem of finding the subarray with the largest sum within a given integer array `nums`. The code you provided is a brute-force approach, which checks all possible subarrays and keeps track of the maximum sum found. Here's a step-by-step breakdown of how it works:

### Code Overview
```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums), ans = INT_MIN;
        for(int i = 0; i<n; i++){
            for(int j=i, curSum =0; j<n; j++){
                curSum += nums[j],
                ans = max(ans, curSum);
            }
        return ans;
        }
    }
};
```

### Steps of Execution

1. **Initialization**:
   - `n` is set to the size of the `nums` array.
   - `ans` is initialized to `INT_MIN`, which represents the smallest possible integer value. This ensures that any sum found in the array will be larger.

2. **Outer Loop (`i`)**:
   - The outer loop iterates over each element in the array, considering it as the starting point of a subarray. The index `i` represents the starting index of the subarray.

3. **Inner Loop (`j`)**:
   - The inner loop starts from the current index `i` and extends the subarray to include more elements, one by one. The index `j` represents the ending index of the subarray.
   - `curSum` keeps track of the sum of the current subarray starting from `i` and ending at `j`. Initially, `curSum` is set to `0` at the beginning of each inner loop.

4. **Sum Calculation**:
   - Within the inner loop, the current element `nums[j]` is added to `curSum`.
   - After adding `nums[j]`, the code checks whether the current subarray sum (`curSum`) is greater than the current maximum sum (`ans`). If it is, `ans` is updated with `curSum`.

5. **Return Value**:
   - After all possible subarrays have been checked, the outer loop ends, and the function returns the maximum sum found, stored in `ans`.

### Example Execution

#### Example 1:
- **Input**: `nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`
- **Output**: `6`
- **Explanation**:
  - The algorithm will check all possible subarrays and calculate their sums.
  - It will find that the subarray `[4, -1, 2, 1]` has the maximum sum of `6`.

#### Example 2:
- **Input**: `nums = [1]`
- **Output**: `1`
- **Explanation**:
  - Since there is only one element, the only subarray possible is `[1]`, and the sum is `1`.

### Efficiency
This brute-force approach is not the most efficient for large arrays because it has a time complexity of \(O(n^2)\). It checks all possible subarrays, which is why it can be slow for larger inputs.

### Optimal Approach
The optimal solution to this problem is Kadane's Algorithm, which runs in \(O(n)\) time and finds the maximum sum of a subarray without the need for nested loops.

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums), ans = INT_MIN;
        for(int i = 0; i<n; i++){
            for(int j=i, curSum =0; j<n; j++){
                curSum += nums[j],
                ans= max(ans, curSum);
            }
        return ans;
        }
    }
};
