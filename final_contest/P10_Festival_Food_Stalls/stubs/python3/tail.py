if __name__ == '__main__':
    n, C = map(int, input().split())
    starts, ends = [], []
    for _ in range(n):
        s, e = map(int, input().split())
        starts.append(s)
        ends.append(e)
    print(maxFestivalTasks(C, starts, ends))