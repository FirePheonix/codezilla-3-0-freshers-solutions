#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> val(n + 1);
    for (int i = 1; i <= n; i++) cin >> val[i];
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // BFS from root = 1
    vector<int> depth(n + 1, -1);
    map<int, long long> levelSum;
    queue<int> q;
    q.push(1);
    depth[1] = 0;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        levelSum[depth[u]] += val[u];
        for (int v : adj[u]) {
            if (depth[v] == -1) {
                depth[v] = depth[u] + 1;
                q.push(v);
            }
        }
    }

    int bestLevel = 0;
    long long bestSum = levelSum[0];
    for (auto& p : levelSum) {
        if (p.second > bestSum) {
            bestSum = p.second;
            bestLevel = p.first;
        }
    }

    cout << bestLevel << "\n" << bestSum << "\n";
    return 0;
}
