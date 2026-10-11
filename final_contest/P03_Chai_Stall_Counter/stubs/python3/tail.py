if __name__ == '__main__':
    n = int(input())
    arr = [int(input()) for _ in range(n)]
    res = chaiStallCounter(arr)
    print(res[0])
    print(res[1])