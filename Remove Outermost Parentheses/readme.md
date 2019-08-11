# [Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/)
## Problem Statement
A valid parentheses string is either empty (""), "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.  For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

A valid parentheses string S is primitive if it is nonempty, and there does not exist a way to split it into S = A+B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string S, consider its primitive decomposition: S = P_1 + P_2 + ... + P_k, where P_i are primitive valid parentheses strings.

Return S after removing the outermost parentheses of every primitive string in the primitive decomposition of S.

## __Example 1:__
```
Input: "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

```

## [Solution](https://github.com/Adityathakur3029/CODING/blob/master/Remove%20Outermost%20Parentheses/sol.cpp)

### Solution: 
We will declare two integers open and close with 0 as initialize value for open and close parentheses respectively.
For first open parantheses we increment the value of open integer by 1 and erase the first open parenthese.Then we will increment integers open 
and close by 1 everytime we encounter open and close parentheses. As soon as the 
value of open and close integers become equal we erase the corresponding parantheses and
set the value of open and close integers to be 0 again.