void frogsLilyPond(int* pads, int n, int* canReach, int* minJumps) {
    int i, maxReach, jumps, curEnd, farthest;
    if (n == 1) { *canReach = 1; *minJumps = 0; return; }

    maxReach = 0;
    for (i = 0; i < n - 1; i++) {
        if (i > maxReach) { *canReach = 0; *minJumps = -1; return; }
        if (i + pads[i] > maxReach) maxReach = i + pads[i];
        if (maxReach >= n - 1) break;
    }
    if (maxReach < n - 1) { *canReach = 0; *minJumps = -1; return; }

    jumps = 0; curEnd = 0; farthest = 0;
    for (i = 0; i < n - 1; i++) {
        if (i + pads[i] > farthest) farthest = i + pads[i];
        if (i == curEnd) {
            jumps++;
            curEnd = farthest;
            if (curEnd >= n - 1) break;
        }
    }
    *canReach = 1;
    *minJumps = jumps;
}
