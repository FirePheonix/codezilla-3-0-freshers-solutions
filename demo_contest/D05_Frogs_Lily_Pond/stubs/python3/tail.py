if __name__ == '__main__':
    n = int(input())
    pads = [int(input()) for _ in range(n)]
    res = frogsLilyPond(pads)
    for s in res:
        print(s)
