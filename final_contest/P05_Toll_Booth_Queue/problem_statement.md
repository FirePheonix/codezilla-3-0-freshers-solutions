# Toll Booth Queue

## Difficulty: Medium

## Story

On the busy Bangalore-Mysore expressway, there is a single toll booth. Vehicles arrive at specified times and must be served one at a time, in order. Each vehicle has a known service time (time the booth takes to process it).

If a vehicle arrives while the booth is still busy with a previous vehicle, it must **wait** in the queue. The **wait time** of vehicle `i` is the time between its arrival and when the booth starts processing it.

The highway authority wants to find the **minimum total wait time** among any `k` **consecutive** vehicles. This metric helps identify the least congested window of traffic.

## Function Description

Complete the function `minCongestion` in the editor below.

`minCongestion` has the following parameters:
- `int k`: window size
- `long arrival[n]`: sorted arrival times
- `int service[n]`: service times

The function must return:
- `long`: minimum total wait time among any `k` consecutive vehicles

## Constraints

- `1 <= k <= n <= 10^5`
- `0 <= arrival[i] <= 10^9`
- `arrival[i] <= arrival[i+1]` (arrivals are sorted)
- `1 <= service[i] <= 10^4`

## Input Format

The first line contains two space-separated integers `n` and `k`.
The next `n` lines each contain a single integer `arrival[i]`.
The next `n` lines each contain a single integer `service[i]`.

## Output Format

Print a single long integer: the minimum total wait time of any `k` consecutive vehicles.

## Sample Input 0

```
5 3
0
3
4
10
11
2
2
2
2
2
```

## Sample Output 0

```
1
```

## Explanation 0

Processing each vehicle:

| Vehicle | Arrival | Booth Free | Start | Wait | Booth Free After |
|---------|---------|------------|-------|------|------------------|
| 0       | 0       | 0          | 0     | 0    | 2                |
| 1       | 3       | 2          | 3     | 0    | 5                |
| 2       | 4       | 5          | 5     | 1    | 7                |
| 3       | 10      | 7          | 10    | 0    | 12               |
| 4       | 11      | 12         | 12    | 1    | 14               |

Wait times: [0, 0, 1, 0, 1]

Windows of k=3 consecutive vehicles:
- Vehicles 0-2: 0 + 0 + 1 = 1
- Vehicles 1-3: 0 + 1 + 0 = 1
- Vehicles 2-4: 1 + 0 + 1 = 2

Minimum = **1**

## Sample Input 1

```
4 2
0
1
2
3
1
1
1
1
```

## Sample Output 1

```
0
```

## Explanation 1

Each vehicle arrives exactly when the booth becomes free, so all wait times are 0. Any window of 2 sums to 0.
