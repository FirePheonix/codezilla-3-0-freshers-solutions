# The Temple Tower Offerings

## Difficulty: Medium

## Story

The ancient Ekambareshwara temple has a sacred tree of shrines, rooted at the main sanctum (node 1). Each shrine is connected to one or more sub-shrines, forming a tree hierarchy. During the annual festival, every shrine *i* receives *v[i]* gold coins as an offering (some shrines may have negative values -- they owe a debt from last year).

The head priest wants to know which **floor** (level) of the temple hierarchy collected the most gold in total. The main sanctum is at floor 0, its direct children are at floor 1, their children at floor 2, and so on.

Given the tree and offering values, find the floor with the **maximum total offering**. If there is a tie, return the **lowest floor number**. Print the floor number on the first line and the total offering at that floor on the second line.

## Function Description

Complete the function `templeOfferings` in the editor below.

`templeOfferings` has the following parameters:
- `long val[n]`: 1-indexed offering values at each shrine
- `adj`: adjacency list of the tree rooted at node 1

The function must return:
- `long[2]`: `[floor number with maximum total offering, that total offering]`

## Constraints

- `1 <= n <= 10^5`
- `-10^4 <= v[i] <= 10^4`
- The tree is rooted at node 1.

## Input Format

The first line contains an integer `n` -- the number of shrines.

The second line contains `n` space-separated integers `v[1], v[2], ..., v[n]` -- the offering at each shrine.

The next `n - 1` lines each contain two integers `u` and `v` -- an edge between shrine `u` and shrine `v`.

## Output Format

Print two lines:
- Line 1: the floor number (0-indexed) with the maximum total offering.
- Line 2: the total offering at that floor.

## Sample Input 0

```
5
10 20 30 5 15
1 2
1 3
2 4
2 5
```

## Sample Output 0

```
1
50
```

## Explanation 0

Tree structure:
```
        1 (10)
       / \
     2(20) 3(30)
     / \
   4(5) 5(15)
```
- Floor 0: 10
- Floor 1: 20 + 30 = 50
- Floor 2: 5 + 15 = 20

Floor 1 has the highest total (50).

## Sample Input 1

```
3
5 10 15
1 2
1 3
```

## Sample Output 1

```
1
25
```

## Explanation 1

Node 1 is the root with value 5 (floor 0). Nodes 2 and 3 are both at floor 1 with values 10 and 15. Floor 1 total = 25, which beats floor 0 total = 5.

## Sample Input 2

```
1
42
```

## Sample Output 2

```
0
42
```

## Explanation 2

Only one shrine exists at floor 0 with offering 42.
