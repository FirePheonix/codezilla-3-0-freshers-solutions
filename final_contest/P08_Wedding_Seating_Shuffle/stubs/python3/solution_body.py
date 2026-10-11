def templeOfferings(val, edgeU, edgeV):
    from collections import deque
    n = len(val) - 1
    adj = [[] for _ in range(n + 1)]
    for u, v in zip(edgeU, edgeV):
        adj[u].append(v)
        adj[v].append(u)
    queue = deque([1])
    visited = [False] * (n + 1)
    visited[1] = True
    best_sum = float('-inf')
    best_level = 0
    level = 0
    while queue:
        sz = len(queue)
        level_sum = 0
        for _ in range(sz):
            node = queue.popleft()
            level_sum += val[node]
            for nb in adj[node]:
                if not visited[nb]:
                    visited[nb] = True
                    queue.append(nb)
        if level_sum > best_sum:
            best_sum = level_sum
            best_level = level
        level += 1
    return [best_level, best_sum]
