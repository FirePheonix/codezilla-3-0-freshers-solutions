# Temple Bell Sequence

## Difficulty: Medium

## Story

In the ancient Hampi temple complex, there is a corridor with `n` bells arranged in a row. Each bell `i` has a resonance value `r[i]`. When a bell is struck, it sends a sound wave to the right. The wave travels until it hits the **next bell with a greater-or-equal resonance value** (the Next Greater-or-Equal Element, or NGE). If no such bell exists, the wave reaches the end of the corridor.

The **power score** of bell `i` is defined as the sum of resonance values of all bells strictly between bell `i` and its NGE (exclusive on both ends). If no NGE exists, the power score is the sum of all bells to the right of `i`.

Find the **total power** across all bells.

## Function Description

Complete the function `templeBellPower` in the editor below.

`templeBellPower` has the following parameter:
- `int r[n]`: array of resonance values

The function must return:
- `long`: total power score across all bells

## Constraints

- `1 <= n <= 10^5`
- `1 <= r[i] <= 10^6`

## Input Format

The first line contains an integer `n`, the number of bells.
Each of the next `n` lines contains a single integer `r[i]`.

## Output Format

Print a single long integer: the total power.

## Sample Input 0

```
5
4
2
1
3
5
```

## Sample Output 0

```
7
```

## Explanation 0

| Bell (i) | r[i] | NGE Index | NGE Value | Elements Between | Power |
|----------|------|-----------|-----------|------------------|-------|
| 0        | 4    | 4         | 5         | r[1]+r[2]+r[3]=6 | 6     |
| 1        | 2    | 3         | 3         | r[2]=1           | 1     |
| 2        | 1    | 3         | 3         | (none)           | 0     |
| 3        | 3    | 4         | 5         | (none)           | 0     |
| 4        | 5    | (none)    | -         | (none)           | 0     |

Total power = 6 + 1 + 0 + 0 + 0 = **7**

## Sample Input 1

```
3
1
2
3
```

## Sample Output 1

```
0
```

## Explanation 1

Each bell's NGE is the immediately next bell, so there are no elements strictly between any bell and its NGE. Total power = 0.
