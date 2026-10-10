int main() {
    int n, k; cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    auto res = kabbadiTracker(scores, k);
    cout << res[0] << "\n" << res[1] << "\n";
    return 0;
}
