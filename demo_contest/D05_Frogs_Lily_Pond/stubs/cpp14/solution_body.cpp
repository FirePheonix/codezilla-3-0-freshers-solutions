vector<string> frogsLilyPond(vector<int> pads) {
    int n = pads.size();
    if (n == 1) return {"YES", "0"};

    int maxReach = 0;
    for (int i = 0; i < n - 1; i++) {
        if (i > maxReach) return {"NO", "-1"};
        maxReach = max(maxReach, i + pads[i]);
        if (maxReach >= n - 1) break;
    }
    if (maxReach < n - 1) return {"NO", "-1"};

    int jumps = 0, curEnd = 0, farthest = 0;
    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + pads[i]);
        if (i == curEnd) {
            jumps++;
            curEnd = farthest;
            if (curEnd >= n - 1) break;
        }
    }
    return {"YES", to_string(jumps)};
}
