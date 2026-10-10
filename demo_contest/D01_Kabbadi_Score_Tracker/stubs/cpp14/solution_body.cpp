vector<long long> kabbadiTracker(vector<int> scores, int k) {
    int n = scores.size();
    long long maxBoost = 0, minSeen = scores[0];
    for (int i = 1; i < n; i++) {
        maxBoost = max(maxBoost, (long long)scores[i] - minSeen);
        minSeen = min(minSeen, (long long)scores[i]);
    }
    long long wSum = 0;
    for (int i = 0; i < k; i++) wSum += scores[i];
    long long maxKSum = wSum;
    for (int i = k; i < n; i++) {
        wSum += scores[i] - scores[i-k];
        maxKSum = max(maxKSum, wSum);
    }
    return {maxBoost, maxKSum};
}
