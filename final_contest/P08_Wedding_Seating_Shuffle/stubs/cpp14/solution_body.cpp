vector<long long> templeOfferings(vector<long long> val, vector<vector<int>> adj) {
    int n = (int)adj.size() - 1;
    queue<int> q;
    vector<bool> visited(n + 1, false);
    q.push(1); visited[1] = true;
    long long bestSum = LLONG_MIN, bestLevel = 0, level = 0;
    while (!q.empty()) {
        int sz = q.size();
        long long levelSum = 0;
        for (int i = 0; i < sz; i++) {
            int node = q.front(); q.pop();
            levelSum += val[node];
            for (int nb : adj[node]) {
                if (!visited[nb]) { visited[nb] = true; q.push(nb); }
            }
        }
        if (levelSum > bestSum) { bestSum = levelSum; bestLevel = level; }
        level++;
    }
    return {bestLevel, bestSum};
}
