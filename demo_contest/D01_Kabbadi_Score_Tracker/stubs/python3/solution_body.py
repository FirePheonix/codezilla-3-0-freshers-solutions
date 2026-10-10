def kabbadiTracker(scores, k):
    n = len(scores)
    max_boost = 0
    min_seen = scores[0]
    for i in range(1, n):
        max_boost = max(max_boost, scores[i] - min_seen)
        min_seen = min(min_seen, scores[i])
    w_sum = sum(scores[:k])
    max_k_sum = w_sum
    for i in range(k, n):
        w_sum += scores[i] - scores[i - k]
        max_k_sum = max(max_k_sum, w_sum)
    return [max_boost, max_k_sum]
