def spiceMarketStalls(stalls, k):
    from collections import defaultdict
    freq = defaultdict(int)
    left = 0
    maxLen = 0
    for right in range(len(stalls)):
        freq[stalls[right]] += 1
        while len(freq) > k:
            freq[stalls[left]] -= 1
            if freq[stalls[left]] == 0:
                del freq[stalls[left]]
            left += 1
        maxLen = max(maxLen, right - left + 1)
    return maxLen
