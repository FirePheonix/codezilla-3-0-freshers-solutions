string postmanRoute(vector<int> arr) {
    int l = 0, r = (int)arr.size() - 1;
    while (l < r) {
        if (arr[l] != arr[r]) return "NO";
        l++; r--;
    }
    return "YES";
}
