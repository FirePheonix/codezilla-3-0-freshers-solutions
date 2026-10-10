int marbleCollection(int* arr, int n, int K, int* newLen) {
    int j = 0, i;
    for (i = 0; i < n; i++)
        if (i == 0 || arr[i] != arr[i-1]) arr[j++] = arr[i];
    *newLen = j;
    int lo = 0, hi = j - 1, count = 0;
    while (lo < hi) {
        long long s = (long long)arr[lo] + arr[hi];
        if (s == K) { count++; lo++; hi--; }
        else if (s < K) lo++;
        else hi--;
    }
    return count;
}
