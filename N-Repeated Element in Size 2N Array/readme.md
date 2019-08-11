# [N-Repeated Element in Size 2N Array](https://leetcode.com/problems/n-repeated-element-in-size-2n-array/)
## Problem Statement
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.

Return the element repeated N times.

## __Example 1:__
```
Input: [1,2,3,3]
Output: 3

```

## [Solution](https://github.com/Adityathakur3029/CODING/blob/master/Sort%20Array%20By%20Parity/sol.cpp)

### Solution: 
We will check the array of size 2N till N+2 elements since there are N+1
distinct elements so whichever element occurs twice will return that element 
as asnwer.