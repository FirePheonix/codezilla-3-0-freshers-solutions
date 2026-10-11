vector<string> diwaliLights(vector<int> b) {
    int n = b.size();
    long long total = 0;
    for (int x : b) total += x;
    int pivot = -1;
    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - b[i];
        if (leftSum == rightSum) { pivot = i; break; }
        leftSum += b[i];
    }
    bool palin = true;
    int l = 0, r = n - 1;
    while (l < r) {
        if (b[l] != b[r]) { palin = false; break; }
        l++; r--;
    }
    return {to_string(pivot), palin ? "YES" : "NO"};
}
