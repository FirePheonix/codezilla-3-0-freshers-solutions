    static long[] kabbadiTracker(int[] scores, int k) {
        int n = scores.length;
        long maxBoost = 0, minSeen = scores[0];
        for (int i = 1; i < n; i++) {
            maxBoost = Math.max(maxBoost, (long)scores[i] - minSeen);
            minSeen = Math.min(minSeen, (long)scores[i]);
        }
        long wSum = 0;
        for (int i = 0; i < k; i++) wSum += scores[i];
        long maxKSum = wSum;
        for (int i = k; i < n; i++) {
            wSum += scores[i] - scores[i-k];
            maxKSum = Math.max(maxKSum, wSum);
        }
        return new long[]{maxBoost, maxKSum};
    }
