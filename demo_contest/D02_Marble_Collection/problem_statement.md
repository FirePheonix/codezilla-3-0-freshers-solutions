# Marble Collection

## Difficulty: Easy

## Story

Rohan has a collection of numbered marbles arranged in sorted order. Some marbles share the same number — he wants to keep only one of each. After cleaning his collection, he wonders how many pairs of marbles sum to exactly `K`.

Help Rohan deduplicate his sorted marbles and count the pairs.

## Function Description

Complete the function `marbleCollection` in the editor below.

`marbleCollection` has the following parameters:
- `int arr[n]`: sorted array of marble numbers (may contain duplicates)
- `int K`: the target sum

The function must return a list/array of two values:
- The deduplicated array as a space-separated string (line 1)
- The count of pairs `(i, j)` with `i < j` in the cleaned array where `arr[i] + arr[j] == K` (line 2)

## Constraints

- `1 <= n <= 10^5`
- `-10^4 <= arr[i] <= 10^4`
- `arr` is sorted in non-decreasing order
- `-2 * 10^4 <= K <= 2 * 10^4`

## Input Format

The first line contains two integers `n` and `K`.
Each of the next `n` lines contains a single integer, the marble number at that position.

## Output Format

Print two lines:
- Line 1: the deduplicated marble numbers, space-separated
- Line 2: the count of pairs summing to `K`

## Sample Input 0

```
7 6
1
1
2
3
4
4
5
```

## Sample Output 0

```
1 2 3 4 5
2
```

## Explanation 0

After removing duplicates: `[1, 2, 3, 4, 5]`. Pairs summing to `6`: `(1,5)` and `(2,4)` — count is `2`.

## Sample Input 1

```
5 10
2
2
4
8
8
```

## Sample Output 1

```
2 4 8
1
```

## Explanation 1

After removing duplicates: `[2, 4, 8]`. Only pair summing to `10` is `(2, 8)` — count is `1`.

## Sample Input 7

```
6 7
1
2
3
4
5
6
```

## Sample Output 7

```
1 2 3 4 5 6
3
```

## Explanation 7

No duplicates to remove. Pairs summing to `7`: `(1,6)`, `(2,5)`, `(3,4)` — count is `3`.
