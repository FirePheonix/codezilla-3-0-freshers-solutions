int main() {
    int n;
    cin >> n;
    vector<string> ops(n);
    for (int i = 0; i < n; i++) cin >> ops[i];
    vector<int> res = cricketScoreboard(ops);
    cout << res[0] << "\n" << res[1] << "\n";
    return 0;
}
