int main() {
    int n;
    cin >> n;
    vector<long long> val(n + 1);
    for (int i = 1; i <= n; i++) cin >> val[i];
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<long long> res = templeOfferings(val, adj);
    cout << res[0] << "\n" << res[1] << "\n";
    return 0;
}
