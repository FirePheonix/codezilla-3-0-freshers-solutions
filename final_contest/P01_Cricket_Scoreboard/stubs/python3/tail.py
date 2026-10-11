if __name__ == '__main__':
    n = int(input())
    ops = [input().strip() for _ in range(n)]
    res = cricketScoreboard(ops)
    print(res[0])
    print(res[1])