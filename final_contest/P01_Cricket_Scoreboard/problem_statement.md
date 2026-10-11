# Cricket Scoreboard

## Difficulty: Easy

## Story

Arnav is the unofficial scorekeeper for his neighbourhood gully cricket match. He maintains a running scoreboard using a stack-based system. After every ball, he performs one of four operations:

- **A number `x`**: The batsman scored `x` runs on this ball. Push `x` onto the scoreboard.
- **`"D"`**: The batsman scored double the runs of the last recorded entry. Push that doubled value.
- **`"C"`**: Cancel! The last recorded entry was a scoring error. Remove it from the scoreboard.
- **`"+"`**: The batsman scored runs equal to the sum of the last two recorded entries. Push that sum.

After processing all operations, Arnav wants to know:
1. The **total** of all remaining scores on the scoreboard.
2. The **all-time maximum** single entry that ever existed on the scoreboard (even if it was later cancelled).

## Function Description

Complete the function `cricketScoreboard` in the editor below.

`cricketScoreboard` has the following parameter:
- `string ops[n]`: array of operations (`"D"`, `"C"`, `"+"`, or an integer string)

The function must return:
- `int[2]`: `[total of remaining scores, all-time maximum single entry]`

## Constraints

- `1 <= n <= 10^5`
- Each operation is one of: an integer string (possibly negative), `"D"`, `"C"`, or `"+"`
- `"D"` and `"+"` are guaranteed to have enough entries on the stack
- `"C"` is guaranteed to have at least one entry on the stack
- Integer values fit in a 32-bit signed integer

## Input Format

The first line contains an integer `n`, the number of operations.
Each of the next `n` lines contains a single string representing an operation.

## Output Format

Print two lines:
- The first line contains the total of all remaining scores.
- The second line contains the all-time maximum single entry.

## Sample Input 0

```
7
5
2
C
D
+
3
C
```

## Sample Output 0

```
30
15
```

## Explanation 0

| Step | Operation | Stack After     | All-Time Max |
|------|-----------|-----------------|--------------|
| 1    | 5         | [5]             | 5            |
| 2    | 2         | [5, 2]          | 5            |
| 3    | C         | [5]             | 5            |
| 4    | D         | [5, 10]         | 10           |
| 5    | +         | [5, 10, 15]     | 15           |
| 6    | 3         | [5, 10, 15, 3]  | 15           |
| 7    | C         | [5, 10, 15]     | 15           |

Total = 5 + 10 + 15 = 30. All-time max = 15.

## Sample Input 1

```
4
1
2
3
+
```

## Sample Output 1

```
11
5
```

## Explanation 1

Stack progression: [1] -> [1,2] -> [1,2,3] -> [1,2,3,5]. Total = 11. The `+` operation produced 3+2=5, which is the all-time max.
