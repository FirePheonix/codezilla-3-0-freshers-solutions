if __name__ == '__main__':
    n = int(input())
    b = [int(input()) for _ in range(n)]
    res = diwaliLights(b)
    print(res[0])
    print(res[1])