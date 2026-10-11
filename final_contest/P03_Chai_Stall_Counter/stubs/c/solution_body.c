int chaiStallCounter(int* arr, int n) {
    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != 0) arr[j++] = arr[i];
    int nonZero = j;
    while (j < n) arr[j++] = 0;

    memset(seen, 0, sizeof(seen));
    int dup = 0;
    for (int i = 0; i < nonZero; i++) {
        if (seen[arr[i]]) { dup = 1; break; }
        seen[arr[i]] = 1;
    }
    return dup;
}
