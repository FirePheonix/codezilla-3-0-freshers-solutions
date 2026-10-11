# Diwali Lights

## Difficulty: Easy

## Story

Kavya is decorating her home for Diwali with a row of lamps. Each lamp has a brightness value. She wants to find the **pivot lamp** — a lamp where the total brightness of all lamps to its left equals the total brightness of all lamps to its right (not including the pivot lamp itself). If multiple pivot lamps exist, she picks the leftmost one (smallest index). If no such lamp exists, she reports `-1`.

Additionally, Kavya is curious whether the entire arrangement of lamp brightnesses forms a palindrome — i.e., the brightness values read the same forwards and backwards.

## Function Description

Complete the function `diwaliLights` in the editor below.

`diwaliLights` has the following parameter:
- `int b[n]`: brightness values of the lamps

The function must return:
- `string[2]`: `[pivot index as string or "-1", "YES" or "NO" for palindrome]`

## Constraints

- `1 <= n <= 10^5`
- `-1000 <= b[i] <= 1000`

## Input Format

The first line contains an integer `n`, the number of lamps.
Each of the next `n` lines contains a single integer, the brightness of a lamp.

## Output Format

Print two lines:
- The first line contains the pivot index (0-indexed), or `-1` if no pivot exists.
- The second line contains `"YES"` if the array is a palindrome, `"NO"` otherwise.

## Sample Input 0

```
6
1
7
3
6
5
6
```

## Sample Output 0

```
3
NO
```

## Explanation 0

Brightnesses: `[1, 7, 3, 6, 5, 6]`.

Checking each index for pivot:
- Index 0: left = 0, right = 7+3+6+5+6 = 27. Not equal.
- Index 1: left = 1, right = 3+6+5+6 = 20. Not equal.
- Index 2: left = 1+7 = 8, right = 6+5+6 = 17. Not equal.
- Index 3: left = 1+7+3 = 11, right = 5+6 = 11. Equal! Pivot = **3**.

Palindrome check: `[1,7,3,6,5,6]` reversed is `[6,5,6,3,7,1]`. Not equal, so **NO**.

## Sample Input 1

```
5
2
1
-1
1
2
```

## Sample Output 1

```
1
YES
```

## Explanation 1

Brightnesses: `[2, 1, -1, 1, 2]`.

Checking each index for pivot:
- Index 0: left = 0, right = 1+(-1)+1+2 = 3. Not equal.
- Index 1: left = 2, right = (-1)+1+2 = 2. Equal! Pivot = **1**.

Palindrome check: `[2, 1, -1, 1, 2]` reversed is `[2, 1, -1, 1, 2]`. Same, so **YES**.
