#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
vector<long long> kabbadiTracker(vector<int> scores, int k) {
    int n = scores.size();
    long long maxBoost = 0, minSeen = scores[0];
    for (int i = 1; i < n; i++) {
        maxBoost = max(maxBoost, (long long)scores[i] - minSeen);
        minSeen = min(minSeen, (long long)scores[i]);
    }
    long long wSum = 0;
    for (int i = 0; i < k; i++) wSum += scores[i];
    long long maxKSum = wSum;
    for (int i = k; i < n; i++) {
        wSum += scores[i] - scores[i-k];
        maxKSum = max(maxKSum, wSum);
    }
    return {maxBoost, maxKSum};
}
// --- End candidate function ---

int main() {
    int n, k; cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    auto res = kabbadiTracker(scores, k);
    cout << res[0] << "\n" << res[1] << "\n";
    return 0;
}
