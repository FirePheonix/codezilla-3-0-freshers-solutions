# Postman's Route

## Difficulty: Easy

## Story

Postman Ganesh delivers letters along a street every morning. He has a fixed route — a sequence of house numbers he visits in order. One day, his supervisor asks him a curious question: "Ganesh, is your delivery route a palindrome?" A palindromic route means that the sequence of house numbers reads the same forwards and backwards. Ganesh decides to check by walking from both ends of his route and comparing house numbers as he goes.

Help Ganesh determine whether his delivery route is a palindrome.

## Function Description

Complete the function `postmanRoute` in the editor below.

`postmanRoute` has the following parameter:
- `int arr[n]`: sequence of house numbers

The function must return:
- `string`: `"YES"` if palindrome, `"NO"` otherwise

## Constraints

- `1 <= n <= 10^5`
- `1 <= arr[i] <= 10^9`

## Input Format

The first line contains an integer `n`, the number of houses on the route.
Each of the next `n` lines contains a single integer, the house number at that position.

## Output Format

Print a single line: `"YES"` if the route is a palindrome, `"NO"` otherwise.

## Sample Input 0

```
5
1
2
3
2
1
```

## Sample Output 0

```
YES
```

## Explanation 0

The route is `[1, 2, 3, 2, 1]`. Reading from left to right and right to left gives the same sequence, so it is a palindrome.

## Sample Input 1

```
4
1
2
3
4
```

## Sample Output 1

```
NO
```

## Explanation 1

The route is `[1, 2, 3, 4]`. Reading backwards gives `[4, 3, 2, 1]`, which is different. The first mismatch is at position 0 (house 1) vs position 3 (house 4). So the route is not a palindrome.
