def longestBalancedStretch(arr):
    pref = {0: -1}
    s = 0
    maxLen = 0
    for i, x in enumerate(arr):
        s += x
        if s in pref:
            maxLen = max(maxLen, i - pref[s])
        else:
            pref[s] = i
    return maxLen
