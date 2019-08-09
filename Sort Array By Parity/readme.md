# [Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/)
## Problem Statement
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.

## __Example 1:__
```
Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

```

#[Solution](https://github.com/Adityathakur3029/CODING/blob/master/Sort%20Array%20By%20Parity/sol.cpp)

Solution: Start from the first element of the array weather it is odd or even. If it is odd than swap the element with the last element and decrease the size of array and 
also decrement the ith iteration and if its even then just move on to next iteration.