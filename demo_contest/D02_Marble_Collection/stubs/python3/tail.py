if __name__ == '__main__':
    n, K = map(int, input().split())
    arr = [int(input()) for _ in range(n)]
    res = marbleCollection(arr, K)
    print(res[0])
    print(res[1])
