# Merchant's Balanced Ledger

## Difficulty: Medium

## Story

Ravi is a spice merchant in old Mysore. Every day he records his profit or loss as a signed integer: positive for profit, negative for loss. At the end of the season, he wants to find the **longest contiguous stretch of days** where the total profit/loss sums exactly to zero -- a "balanced" period that tells him the business was stable.

Given an array of daily profit/loss values, find the length of the longest contiguous subarray whose sum equals zero.

## Function Description

Complete the function `longestBalancedStretch` in the editor below.

`longestBalancedStretch` has the following parameter:
- `int arr[n]`: array of daily profit/loss values

The function must return:
- `int`: length of the longest contiguous subarray summing to zero, or `0` if none

## Constraints

- `1 <= n <= 10^5`
- `-10^4 <= arr[i] <= 10^4`

## Input Format

The first line contains an integer `n`, the size of the array.
Each of the next `n` lines contains a single integer `arr[i]`.

## Output Format

Print a single integer: the length of the longest balanced stretch.

## Sample Input 0

```
8
1
-1
3
2
-2
-3
1
-1
```

## Sample Output 0

```
8
```

## Explanation 0

The entire array sums to 1 + (-1) + 3 + 2 + (-2) + (-3) + 1 + (-1) = 0, so the longest balanced stretch has length 8.

## Sample Input 1

```
5
1
2
-3
3
-3
```

## Sample Output 1

```
5
```

## Explanation 1

The entire array sums to 1 + 2 + (-3) + 3 + (-3) = 0, so the answer is 5.
