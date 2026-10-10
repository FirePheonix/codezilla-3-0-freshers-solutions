def marbleCollection(arr, K):
    dedup = []
    for i, v in enumerate(arr):
        if i == 0 or v != arr[i-1]:
            dedup.append(v)
    dedup_str = ' '.join(map(str, dedup))
    lo, hi, count = 0, len(dedup) - 1, 0
    while lo < hi:
        s = dedup[lo] + dedup[hi]
        if s == K:
            count += 1
            lo += 1
            hi -= 1
        elif s < K:
            lo += 1
        else:
            hi -= 1
    return [dedup_str, str(count)]
