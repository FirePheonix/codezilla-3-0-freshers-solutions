void diwaliLights(int* b, int n, int* pivot, int* isPalin) {
    long long total = 0;
    for (int i = 0; i < n; i++) total += b[i];
    *pivot = -1;
    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - b[i];
        if (leftSum == rightSum) { *pivot = i; break; }
        leftSum += b[i];
    }
    *isPalin = 1;
    int l = 0, r = n - 1;
    while (l < r) {
        if (b[l] != b[r]) { *isPalin = 0; break; }
        l++; r--;
    }
}
