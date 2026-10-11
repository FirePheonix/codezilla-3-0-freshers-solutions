int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<string> res = chaiStallCounter(arr);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
