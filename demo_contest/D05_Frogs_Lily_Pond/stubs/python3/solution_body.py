def frogsLilyPond(pads):
    n = len(pads)
    if n == 1:
        return ["YES", "0"]

    max_reach = 0
    for i in range(n - 1):
        if i > max_reach:
            return ["NO", "-1"]
        if i + pads[i] > max_reach:
            max_reach = i + pads[i]
        if max_reach >= n - 1:
            break
    if max_reach < n - 1:
        return ["NO", "-1"]

    jumps = 0
    cur_end = 0
    farthest = 0
    for i in range(n - 1):
        if i + pads[i] > farthest:
            farthest = i + pads[i]
        if i == cur_end:
            jumps += 1
            cur_end = farthest
            if cur_end >= n - 1:
                break
    return ["YES", str(jumps)]
