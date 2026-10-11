/* adjacency list using static arrays */
int hd[100005], nx[200005], to[200005], ec;
int bfsQ[100005], vis[100005];

void templeOfferings(long long* val, int* edgeU, int* edgeV, int n, long long* result) {
    int i;
    for (i = 0; i <= n; i++) { hd[i] = -1; vis[i] = 0; }
    ec = 0;
    for (i = 0; i < n - 1; i++) {
        int u = edgeU[i], v = edgeV[i];
        to[ec] = v; nx[ec] = hd[u]; hd[u] = ec++;
        to[ec] = u; nx[ec] = hd[v]; hd[v] = ec++;
    }

    int qh = 0, qt = 0;
    bfsQ[qt++] = 1; vis[1] = 1;
    long long bestSum = -9000000000000000000LL;
    long long bestLevel = 0, level = 0;

    while (qh < qt) {
        int sz = qt - qh;
        long long lsum = 0;
        for (i = 0; i < sz; i++) {
            int node = bfsQ[qh++];
            lsum += val[node];
            for (int e = hd[node]; e != -1; e = nx[e]) {
                if (!vis[to[e]]) { vis[to[e]] = 1; bfsQ[qt++] = to[e]; }
            }
        }
        if (lsum > bestSum) { bestSum = lsum; bestLevel = level; }
        level++;
    }
    result[0] = bestLevel;
    result[1] = bestSum;
}
