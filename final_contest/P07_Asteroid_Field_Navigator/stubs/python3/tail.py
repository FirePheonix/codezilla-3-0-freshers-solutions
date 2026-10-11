if __name__ == '__main__':
    n, T = map(int, input().split())
    asteroids = [int(input()) for _ in range(n)]
    res = asteroidStation(asteroids, T)
    print(res[0])
    print(res[1])