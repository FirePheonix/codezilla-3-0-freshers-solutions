def templeBellPower(r):
    n = len(r)
    prefix = [0] * (n+1)
    for i in range(n): prefix[i+1] = prefix[i] + r[i]
    nge = [n] * n
    stk = []
    for i in range(n-1, -1, -1):
        while stk and r[stk[-1]] < r[i]: stk.pop()
        if stk: nge[i] = stk[-1]
        stk.append(i)
    total = 0
    for i in range(n):
        left, right = i+1, nge[i]
        if left < right: total += prefix[right] - prefix[left]
    return total
