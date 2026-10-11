int longestBalancedStretch(int* arr, int n) {
    hclear();
    hset(0LL, -1);
    long long psum = 0;
    int maxLen = 0, prev;
    for (int i = 0; i < n; i++) {
        psum += arr[i];
        if (hget(psum, &prev)) {
            if (i - prev > maxLen) maxLen = i - prev;
        } else {
            hset(psum, i);
        }
    }
    return maxLen;
}
