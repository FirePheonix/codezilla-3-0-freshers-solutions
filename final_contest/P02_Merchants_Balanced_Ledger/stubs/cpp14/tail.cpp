int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << longestBalancedStretch(arr) << "\n";
    return 0;
}
