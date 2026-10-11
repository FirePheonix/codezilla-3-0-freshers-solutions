def minCongestion(k, arrival, service):
    n = len(arrival)
    wait = [0] * n
    booth_free = 0
    for i in range(n):
        st = max(booth_free, arrival[i])
        wait[i] = st - arrival[i]
        booth_free = st + service[i]
    w_sum = sum(wait[:k])
    min_sum = w_sum
    for i in range(k, n):
        w_sum += wait[i] - wait[i-k]
        min_sum = min(min_sum, w_sum)
    return min_sum
