def maxFestivalTasks(C, starts, ends):
    tasks = sorted(zip(ends, starts))
    count = 0
    last_end = float('-inf')
    for e, s in tasks:
        if s >= last_end + C + 1:
            count += 1
            last_end = e
    return count
