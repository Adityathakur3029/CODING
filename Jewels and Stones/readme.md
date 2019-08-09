# [Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/)
## Problem Statement
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

## __Example 1:__
```
Input: J = "aA", S = "aAAbbbb"
Output: 3

```

## [Solution](https://github.com/Adityathakur3029/CODING/blob/master/Defanging%20an%20IP%20Address/sol.cpp)

### Solution: 
Using nested loop, for each element in J string we will search for occurence of element in string S.