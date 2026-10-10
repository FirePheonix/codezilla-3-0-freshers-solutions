# Kabbadi Score Tracker

## Difficulty: Easy

## Story

Arjun coaches a kabbadi team and records the score after each round of play. After the season, he wants to analyse the team's performance in two ways:

1. **Maximum Score Boost**: The biggest improvement from one round to a later round — the maximum value of `scores[j] - scores[i]` where `i < j`. If scores never improved, the boost is `0`.
2. **Best Consecutive Stretch**: The highest total score the team accumulated over any `k` consecutive rounds.

Help Arjun compute both values from the season's score record.

## Function Description

Complete the function `kabbadiTracker` in the editor below.

`kabbadiTracker` has the following parameters:
- `int scores[n]`: scores recorded each round
- `int k`: the window size for consecutive rounds

The function must return:
- A list/array of two integers: `[maxBoost, maxKSum]`
  - `maxBoost`: maximum `scores[j] - scores[i]` for `i < j`, or `0` if no positive boost exists
  - `maxKSum`: maximum sum of any `k` consecutive elements

## Constraints

- `1 <= k <= n <= 10^5`
- `-10^4 <= scores[i] <= 10^4`

## Input Format

The first line contains two integers `n` and `k`.
Each of the next `n` lines contains a single integer, the score for that round.

## Output Format

Print two lines:
- Line 1: the maximum score boost
- Line 2: the maximum k-consecutive sum

## Sample Input 0

```
6 3
7
1
5
3
6
4
```

## Sample Output 0

```
5
14
```

## Explanation 0

Scores are `[7, 1, 5, 3, 6, 4]`. The best boost is `6 - 1 = 5` (buy at round 2, sell at round 5). The best 3-window is `[5, 3, 6]` with sum `14`.

## Sample Input 1

```
5 2
2
4
1
7
3
```

## Sample Output 1

```
6
10
```

## Explanation 1

Scores are `[2, 4, 1, 7, 3]`. The best boost is `7 - 1 = 6`. The best 2-window is `[1, 7]` (or `[3, 7]` — actually `[1,7]` sums to `8` and `[4,... wait: windows are `[2,4]=6`, `[4,1]=5`, `[1,7]=8`, `[7,3]=10`) — best is `[7, 3] = 10`.

## Sample Input 7

```
4 2
5
3
8
2
```

## Sample Output 7

```
5
11
```

## Explanation 7

Scores are `[5, 3, 8, 2]`. The best boost is `8 - 3 = 5`. The best 2-window is `[3, 8]` with sum `11`.
