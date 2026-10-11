def chaiStallCounter(arr):
    j = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[j], arr[i] = arr[i], arr[j]
            j += 1
    arranged = ' '.join(map(str, arr))
    seen = set()
    dup = False
    for x in arr[:j]:
        if x in seen:
            dup = True
            break
        seen.add(x)
    return [arranged, "YES" if dup else "NO"]
