if __name__ == '__main__':
    n, k = map(int, input().split())
    stalls = [int(input()) for _ in range(n)]
    print(spiceMarketStalls(stalls, k))
