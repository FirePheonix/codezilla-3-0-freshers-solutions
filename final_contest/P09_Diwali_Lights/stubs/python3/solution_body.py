def diwaliLights(b):
    n = len(b)
    total = sum(b)
    pivot = -1
    left_sum = 0
    for i in range(n):
        right_sum = total - left_sum - b[i]
        if left_sum == right_sum:
            pivot = i
            break
        left_sum += b[i]
    palin = (b == b[::-1])
    return [str(pivot), "YES" if palin else "NO"]
