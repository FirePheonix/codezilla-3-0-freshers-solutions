if __name__ == '__main__':
    n = int(input())
    vals = list(map(int, input().split()))
    val = [0] + vals  # 1-indexed
    edgeU, edgeV = [], []
    for _ in range(n - 1):
        u, v = map(int, input().split())
        edgeU.append(u)
        edgeV.append(v)
    res = templeOfferings(val, edgeU, edgeV)
    print(res[0])
    print(res[1])