# Asteroid Field Navigator

## Difficulty: Medium

## Story

Captain Kira commands a small spacecraft navigating through a dense asteroid field. Each asteroid has a size and a direction: positive values mean the asteroid is moving to the right, and negative values mean it is moving to the left. Asteroids moving in the same direction never collide, but when a right-moving asteroid meets a left-moving one, they collide:

- The smaller asteroid is destroyed.
- If both are the same size, both are destroyed.
- The larger asteroid survives and continues.

After all collisions resolve, the surviving asteroids drift to a nearby space station for docking. Each surviving asteroid takes time equal to its absolute size to dock. Captain Kira needs to know two things: which asteroids survived, and whether the total docking time exceeds a safety threshold `T`.

## Function Description

Complete the function `asteroidStation` in the editor below.

`asteroidStation` has the following parameters:
- `int asteroids[n]`: asteroid sizes with directions (positive=right, negative=left)
- `long T`: docking time threshold

The function must return:
- `string[2]`: `[surviving asteroids space-separated or "EMPTY", "YES" or "NO" if total docking time exceeds T]`

## Constraints

- `1 <= n <= 10^5`
- `-1000 <= asteroids[i] <= 1000`, `asteroids[i] != 0`
- `0 <= T <= 10^9`

## Input Format

The first line contains two space-separated integers `n` and `T`, the number of asteroids and the docking time threshold.
Each of the next `n` lines contains a single integer, the size and direction of an asteroid.

## Output Format

Print two lines:
- The first line contains the surviving asteroids as space-separated integers, or `"EMPTY"` if none survive.
- The second line contains `"YES"` or `"NO"` indicating whether total docking time exceeds `T`.

## Sample Input 0

```
6 20
5
10
-5
-3
8
-8
```

## Sample Output 0

```
5 10
NO
```

## Explanation 0

- Asteroid `5` moves right, `10` moves right — no collision.
- Asteroid `-5` moves left, collides with `10` (size 10 vs 5) — `10` survives, `-5` destroyed.
- Asteroid `-3` moves left, collides with `10` (size 10 vs 3) — `10` survives, `-3` destroyed.
- Asteroid `8` moves right — no collision with `10` or `5`.
- Asteroid `-8` moves left, collides with `8` (size 8 vs 8) — both destroyed.

Survivors: `[5, 10]`. Total docking time = 5 + 10 = 15. Is 15 > 20? NO.

## Sample Input 1

```
4 5
3
-3
4
-4
```

## Sample Output 1

```
EMPTY
NO
```

## Explanation 1

- `3` and `-3` collide — both destroyed (equal size).
- `4` and `-4` collide — both destroyed (equal size).

No survivors remain. Total docking time = 0. Is 0 > 5? NO.
