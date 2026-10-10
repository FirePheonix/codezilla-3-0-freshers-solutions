vector<string> marbleCollection(vector<int> arr, int K) {
    int j = 0;
    for (int i = 0; i < (int)arr.size(); i++)
        if (i == 0 || arr[i] != arr[i-1]) arr[j++] = arr[i];
    arr.resize(j);
    string dedup = "";
    for (int i = 0; i < j; i++) {
        if (i) dedup += " ";
        dedup += to_string(arr[i]);
    }
    int lo = 0, hi = j - 1, count = 0;
    while (lo < hi) {
        long long s = (long long)arr[lo] + arr[hi];
        if (s == K) { count++; lo++; hi--; }
        else if (s < K) lo++;
        else hi--;
    }
    return {dedup, to_string(count)};
}
