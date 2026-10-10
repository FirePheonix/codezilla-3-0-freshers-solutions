int main() {
    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) cin >> stalls[i];
    cout << spiceMarketStalls(stalls, k) << "\n";
    return 0;
}
