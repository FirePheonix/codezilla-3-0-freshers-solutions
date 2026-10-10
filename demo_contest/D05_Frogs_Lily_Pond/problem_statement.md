# Frog's Lily Pond

## Difficulty: Medium

## Story

Ranjit's frog sits on lily pad 0 in a pond. There are **n** lily pads numbered 0 to n-1. From pad **i**, the frog can jump forward up to `pads[i]` pads (it may land on pads i+1, i+2, ..., i+pads[i]). The frog wants to reach the **last lily pad** (index n-1).

First determine whether the frog **can** reach the last pad. If it can, also find the **minimum number of jumps** required.

## Function Description

Complete the function `frogsLilyPond` in the editor below.

`frogsLilyPond` has the following parameter:
- `int pads[n]`: array where `pads[i]` is the maximum jump length from pad i

The function must return:
- A pair of results: `"YES"` or `"NO"` on the first line, and the minimum jumps (or `-1` if unreachable) on the second line.

## Constraints

- `1 <= n <= 10^5`
- `0 <= pads[i] <= 10^4`

## Input Format

The first line contains an integer `n`, the number of lily pads.
Each of the next `n` lines contains a single integer `pads[i]`.

## Output Format

Print two lines:
- Line 1: `YES` if the frog can reach the last pad, `NO` otherwise.
- Line 2: The minimum number of jumps if reachable, or `-1` if not.

## Sample Input 0

```
6
2
3
1
1
4
0
```

## Sample Output 0

```
YES
3
```

## Explanation 0

One optimal path: pad 0 → pad 1 → pad 2 → pad 5 (jump sizes: 1, 1, 3). Wait, from pad 1 (pads[1]=3) can reach pads 2,3,4. From pad 2 (pads[2]=1) can reach pad 3. From pad 4 (pads[4]=4) can reach pad 5. Optimal: 0 → 1 → 4 → 5 requires 3 jumps (1+3+1=path lengths). The minimum is 3 jumps.

## Sample Input 1

```
4
3
2
1
0
```

## Sample Output 1

```
YES
1
```

## Explanation 1

From pad 0, pads[0]=3, so the frog can jump directly to pad 3 (the last pad) in just 1 jump.

## Sample Input 2

```
5
2
1
2
0
1
```

## Sample Output 2

```
YES
2
```

## Explanation 2

One optimal path: pad 0 → pad 2 → pad 4. From pad 0 (pads[0]=2), jump to pad 2. From pad 2 (pads[2]=2), jump to pad 4. That's 2 jumps.
