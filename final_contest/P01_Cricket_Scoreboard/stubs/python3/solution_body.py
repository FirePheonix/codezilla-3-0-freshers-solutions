def cricketScoreboard(ops):
    stk = []
    allTimeMax = float('-inf')
    for op in ops:
        if op == 'C':
            if stk: stk.pop()
        elif op == 'D':
            val = stk[-1] * 2
            stk.append(val)
            allTimeMax = max(allTimeMax, val)
        elif op == '+':
            val = stk[-1] + stk[-2]
            stk.append(val)
            allTimeMax = max(allTimeMax, val)
        else:
            val = int(op)
            stk.append(val)
            allTimeMax = max(allTimeMax, val)
    return [sum(stk), allTimeMax]
