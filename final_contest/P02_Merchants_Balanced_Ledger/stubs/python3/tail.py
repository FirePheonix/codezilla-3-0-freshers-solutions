if __name__ == '__main__':
    n = int(input())
    arr = [int(input()) for _ in range(n)]
    print(longestBalancedStretch(arr))