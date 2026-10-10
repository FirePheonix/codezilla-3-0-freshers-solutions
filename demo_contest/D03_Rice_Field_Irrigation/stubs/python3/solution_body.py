def riceFieldIrrigation(water, k):
    from collections import defaultdict
    pref = defaultdict(int)
    pref[0] = 1
    psum = 0
    count = 0
    for x in water:
        psum += x
        count += pref[psum - k]
        pref[psum] += 1
    return count
