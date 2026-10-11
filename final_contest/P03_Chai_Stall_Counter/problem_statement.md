# Chai Stall Counter

## Difficulty: Easy

## Story

Raju runs a popular chai stall. He tracks the number of cups sold at each counter position throughout the day. Some counters recorded zero sales (they were closed). Raju wants to:

1. **Rearrange** the counters so all active counters (non-zero sales) come first, preserving their relative order, followed by all the closed counters (zeros).
2. **Check** if any two active counters had the exact same number of sales (duplicates among non-zero values).

Given an array of integers representing sales at each counter, perform both tasks.

## Function Description

Complete the function `chaiStallCounter` in the editor below.

`chaiStallCounter` has the following parameter:
- `int arr[n]`: array of sales counts per counter

The function must return:
- `string[2]`: `[rearranged array as space-separated string, "YES" or "NO" for duplicates among non-zero values]`

## Constraints

- `1 <= n <= 10^5`
- `0 <= arr[i] <= 10^6`

## Input Format

The first line contains an integer `n`, the size of the array.
Each of the next `n` lines contains a single integer `arr[i]`.

## Output Format

Print two lines:
- The first line contains the rearranged array as space-separated integers.
- The second line contains `"YES"` or `"NO"`.

## Sample Input 0

```
7
0
3
0
1
3
0
2
```

## Sample Output 0

```
3 1 3 2 0 0 0
YES
```

## Explanation 0

After moving zeros to the end: `[3, 1, 3, 2, 0, 0, 0]`. Among the non-zero values `{3, 1, 3, 2}`, the value `3` appears twice, so duplicates exist: `YES`.

## Sample Input 1

```
5
1
2
3
4
5
```

## Sample Output 1

```
1 2 3 4 5
NO
```

## Explanation 1

No zeros to move. All non-zero values are distinct: `NO`.
