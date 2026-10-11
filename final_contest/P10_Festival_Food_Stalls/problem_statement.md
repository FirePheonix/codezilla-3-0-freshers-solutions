# Festival Food Stalls

## Difficulty: Medium

## Story

Priya manages the food stall operations at a bustling village festival. There is a single shared kitchen that can handle only one task at a time. Various food preparation tasks have been requested, each with a time window `[start, end]` during which the task must be fully executed (the kitchen works on it from `start` through `end`, inclusive). After completing a task, the kitchen requires a cooldown period of `C` minutes before it can start the next task.

Priya wants to maximize the number of tasks completed. She must choose a subset of tasks such that:
- No two selected tasks overlap in time.
- After finishing a task at time `end`, the next task cannot start before time `end + C + 1`.

Help Priya find the maximum number of tasks she can complete.

## Function Description

Complete the function `maxFestivalTasks` in the editor below.

`maxFestivalTasks` has the following parameters:
- `long C`: cooldown period in minutes
- `int starts[n]`: start times of tasks
- `int ends[n]`: end times of tasks

The function must return:
- `int`: maximum number of tasks that can be completed

## Constraints

- `1 <= n <= 10^5`
- `0 <= C <= 10^9`
- `0 <= starts[i] <= ends[i] <= 10^9`

## Input Format

The first line contains two space-separated integers `n` and `C`, the number of tasks and the cooldown period.
Each of the next `n` lines contains two space-separated integers `start` and `end`, representing a task's time window.

## Output Format

Print a single integer: the maximum number of tasks that can be completed.

## Sample Input 0

```
5 2
1 3
2 5
6 8
9 10
11 14
```

## Sample Output 0

```
3
```

## Explanation 0

Tasks sorted by end time: `[1,3], [2,5], [6,8], [9,10], [11,14]`.

With cooldown C=2:
- Select `[1,3]`. Next task can start at time 3+2+1 = 6.
- Select `[6,8]`. Next task can start at time 8+2+1 = 11.
- Skip `[9,10]` — starts at 9 < 11.
- Select `[11,14]`. Next task can start at time 14+2+1 = 17.

Total: **3** tasks.

## Sample Input 1

```
3 0
1 2
3 4
5 6
```

## Sample Output 1

```
3
```

## Explanation 1

With cooldown C=0, the next task can start immediately after the previous one ends (at `end + 1`).

- Select `[1,2]`. Next task can start at time 3.
- Select `[3,4]`. Next task can start at time 5.
- Select `[5,6]`. Done.

All 3 tasks can be completed with no conflicts.
