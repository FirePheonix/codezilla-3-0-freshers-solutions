# Spice Market Stalls

## Difficulty: Medium

## Story

Preethi walks through a long spice market. Each stall sells exactly one type of spice, represented as an integer type code. She can only focus on at most **K different spice types** at a time. She wants to find the **longest continuous stretch of stalls** she can walk through while encountering at most K different spice types.

Given an array of stall spice types and a limit K, find the length of the longest contiguous subarray that contains at most K distinct values.

## Function Description

Complete the function `spiceMarketStalls` in the editor below.

`spiceMarketStalls` has the following parameters:
- `int stalls[n]`: array of spice type codes for each stall
- `int k`: maximum number of distinct spice types allowed

The function must return:
- `int`: the length of the longest contiguous subarray with at most k distinct values

## Constraints

- `1 <= n <= 10^5`
- `1 <= stalls[i] <= 10000`
- `1 <= k <= n`

## Input Format

The first line contains two integers `n` and `k`.
Each of the next `n` lines contains a single integer `stalls[i]`.

## Output Format

Print a single integer: the length of the longest stretch with at most k distinct spice types.

## Sample Input 0

```
5 2
1
2
1
3
4
```

## Sample Output 0

```
3
```

## Explanation 0

With at most 2 distinct types, the best stretch is [1,2,1] (types 1 and 2, length 3). Adding stall with type 3 gives 3 distinct types which exceeds k=2.

## Sample Input 1

```
3 1
3
3
3
```

## Sample Output 1

```
3
```

## Explanation 1

All stalls sell the same spice type (type 3). The entire array has only 1 distinct type, which is within k=1. The longest stretch is length 3.

## Sample Input 2

```
5 2
2
2
1
1
2
```

## Sample Output 2

```
5
```

## Explanation 2

The entire array contains only 2 distinct spice types (1 and 2), which is exactly k=2. So the longest stretch is the entire array with length 5.
