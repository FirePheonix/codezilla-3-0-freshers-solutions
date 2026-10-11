vector<string> chaiStallCounter(vector<int> arr) {
    int n = arr.size(), j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != 0) swap(arr[i], arr[j++]);
    int nonZero = j;
    while (j < n) arr[j++] = 0;
    string arranged = "";
    for (int i = 0; i < n; i++) {
        if (i) arranged += " ";
        arranged += to_string(arr[i]);
    }
    unordered_set<int> seen;
    bool dup = false;
    for (int i = 0; i < nonZero; i++) {
        if (seen.count(arr[i])) { dup = true; break; }
        seen.insert(arr[i]);
    }
    return {arranged, dup ? "YES" : "NO"};
}
