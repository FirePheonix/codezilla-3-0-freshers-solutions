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
