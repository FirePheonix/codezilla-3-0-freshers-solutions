# Rice Field Irrigation

## Difficulty: Medium

## Story

Farmer Govind tracks the daily water flow into his rice field. Positive values mean water flows in, and negative values mean water drains away. He wants to know how many **continuous stretches of days** had **exactly K liters** of total water flow.

Given an array of daily water-flow values and a target K, count the number of contiguous subarrays whose elements sum to exactly K.

## Function Description

Complete the function `riceFieldIrrigation` in the editor below.

`riceFieldIrrigation` has the following parameters:
- `int water[n]`: array of daily water-flow values (can be negative)
- `int k`: the target sum

The function must return:
- `int`: the number of contiguous subarrays whose sum equals k

## Constraints

- `1 <= n <= 10^5`
- `-10^4 <= water[i] <= 10^4`
- `-10^9 <= k <= 10^9`

## Input Format

The first line contains two integers `n` and `k`.
Each of the next `n` lines contains a single integer `water[i]`.

## Output Format

Print a single integer: the count of subarrays with sum equal to k.

## Sample Input 0

```
5 2
1
1
1
1
1
```

## Sample Output 0

```
4
```

## Explanation 0

The subarrays summing to 2 are: [1,1] starting at index 0, index 1, index 2, and index 3. That gives 4 subarrays.

## Sample Input 1

```
4 0
1
-1
2
-2
```

## Sample Output 1

```
3
```

## Explanation 1

The subarrays summing to 0 are: [1,-1] (indices 0-1), [2,-2] (indices 2-3), and [1,-1,2,-2] (indices 0-3). That gives 3 subarrays.

## Sample Input 2

```
5 5
2
3
-1
4
2
```

## Sample Output 2

```
2
```

## Explanation 2

The subarrays summing to 5 are: [2,3] (indices 0-1) with sum 2+3=5, and [-1,4,2] (indices 2-4) with sum -1+4+2=5. That gives 2 subarrays.
