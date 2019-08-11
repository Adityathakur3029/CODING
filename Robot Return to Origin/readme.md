# [Robot Return to Origin](https://leetcode.com/problems/robot-return-to-origin/)
## Problem Statement
There is a robot starting at position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

The move sequence is represented by a string, and the character moves[i] represents its ith move. Valid moves are R (right), L (left), U (up), and D (down). If the robot returns to the origin after it finishes all of its moves, return true. Otherwise, return false.

Note: The way that the robot is "facing" is irrelevant. "R" will always make the robot move to the right once, "L" will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

## __Example 1:__
```
Input: "UD"
Output: true 
Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.

```

## [Solution](https://github.com/Adityathakur3029/CODING/blob/master/Robot%20Return%20to%20Origin/sol.cpp)

### Solution: 
We will declare two integers count and sum.
Increment count for 'U' and decrement the count for 'D'.
Increment sum for 'L' and decrement the count for 'R'.
If sum and count both are zero, return true else false.