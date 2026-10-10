if __name__ == '__main__':
    n, k = map(int, input().split())
    scores = [int(input()) for _ in range(n)]
    res = kabbadiTracker(scores, k)
    print(res[0])
    print(res[1])
