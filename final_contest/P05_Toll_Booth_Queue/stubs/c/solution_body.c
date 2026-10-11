long long wait[100005];

long long minCongestion(int k, long long* arrival, int* service, int n) {
    long long boothFree = 0;
    for (int i = 0; i < n; i++) {
        long long st = boothFree > arrival[i] ? boothFree : arrival[i];
        wait[i] = st - arrival[i];
        boothFree = st + service[i];
    }
    long long wSum = 0;
    for (int i = 0; i < k; i++) wSum += wait[i];
    long long minSum = wSum;
    for (int i = k; i < n; i++) {
        wSum += wait[i] - wait[i - k];
        if (wSum < minSum) minSum = wSum;
    }
    return minSum;
}
