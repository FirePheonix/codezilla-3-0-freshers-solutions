#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
long long minCongestion(int k, vector<long long> arrival, vector<int> service) {
    int n = arrival.size();
    vector<long long> wait(n);
    long long boothFree = 0;
    for (int i = 0; i < n; i++) {
        long long st = max(boothFree, arrival[i]);
        wait[i] = st - arrival[i];
        boothFree = st + service[i];
    }
    long long wSum = 0;
    for (int i = 0; i < k; i++) wSum += wait[i];
    long long minSum = wSum;
    for (int i = k; i < n; i++) {
        wSum += wait[i] - wait[i - k];
        minSum = min(minSum, wSum);
    }
    return minSum;
}
// --- End candidate function ---

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> arrival(n);
    for (int i = 0; i < n; i++) cin >> arrival[i];
    vector<int> service(n);
    for (int i = 0; i < n; i++) cin >> service[i];
    cout << minCongestion(k, arrival, service) << "\n";
    return 0;
}
