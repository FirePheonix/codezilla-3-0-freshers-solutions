int main() {
    int n, K; cin >> n >> K;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    auto res = marbleCollection(arr, K);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
