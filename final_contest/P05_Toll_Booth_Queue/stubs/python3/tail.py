if __name__ == '__main__':
    n, k = map(int, input().split())
    arrival = [int(input()) for _ in range(n)]
    service = [int(input()) for _ in range(n)]
    print(minCongestion(k, arrival, service))