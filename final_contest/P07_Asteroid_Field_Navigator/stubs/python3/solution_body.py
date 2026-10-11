def asteroidStation(asteroids, T):
    stack = []
    for a in asteroids:
        alive = True
        while alive and a < 0 and stack and stack[-1] > 0:
            if stack[-1] < -a:
                stack.pop()
            elif stack[-1] == -a:
                stack.pop()
                alive = False
            else:
                alive = False
        if alive:
            stack.append(a)
    if not stack:
        surv_str = "EMPTY"
    else:
        surv_str = " ".join(map(str, stack))
    total = sum(abs(x) for x in stack)
    return [surv_str, "YES" if total > T else "NO"]
