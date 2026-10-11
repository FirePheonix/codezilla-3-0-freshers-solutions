def postmanRoute(arr):
    l, r = 0, len(arr) - 1
    while l < r:
        if arr[l] != arr[r]:
            return "NO"
        l += 1
        r -= 1
    return "YES"
