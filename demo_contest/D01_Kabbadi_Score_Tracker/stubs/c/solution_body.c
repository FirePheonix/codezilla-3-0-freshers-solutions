void kabbadiTracker(int* scores, int n, int k, long long* maxBoost, long long* maxKSum) {
    long long minSeen = scores[0];
    *maxBoost = 0;
    int i;
    for (i = 1; i < n; i++) {
        long long diff = (long long)scores[i] - minSeen;
        if (diff > *maxBoost) *maxBoost = diff;
        if ((long long)scores[i] < minSeen) minSeen = (long long)scores[i];
    }
    long long wSum = 0;
    for (i = 0; i < k; i++) wSum += scores[i];
    *maxKSum = wSum;
    for (i = k; i < n; i++) {
        wSum += scores[i] - scores[i-k];
        if (wSum > *maxKSum) *maxKSum = wSum;
    }
}
