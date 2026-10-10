if __name__ == '__main__':
    n, k = map(int, input().split())
    water = [int(input()) for _ in range(n)]
    print(riceFieldIrrigation(water, k))
