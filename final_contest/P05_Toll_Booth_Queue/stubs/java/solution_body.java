    static long minCongestion(int k, long[] arrival, int[] service) {
        int n = arrival.length;
        long[] wait = new long[n];
        long boothFree = 0;
        for (int i = 0; i < n; i++) {
            long st = Math.max(boothFree, arrival[i]);
            wait[i] = st - arrival[i];
            boothFree = st + service[i];
        }
        long wSum = 0;
        for (int i = 0; i < k; i++) wSum += wait[i];
        long minSum = wSum;
        for (int i = k; i < n; i++) {
            wSum += wait[i] - wait[i-k];
            minSum = Math.min(minSum, wSum);
        }
        return minSum;
    }
