int spiceMarketStalls(int* stalls, int n, int k) {
    freqClear();
    int left = 0, maxLen = 0, right;
    for (right = 0; right < n; right++) {
        freqAdd(stalls[right]);
        while (distinctCount > k) {
            freqRemove(stalls[left]);
            left++;
        }
        if (right - left + 1 > maxLen) maxLen = right - left + 1;
    }
    return maxLen;
}
