int main() {
    int n, k;
    cin >> n >> k;
    vector<int> water(n);
    for (int i = 0; i < n; i++) cin >> water[i];
    cout << riceFieldIrrigation(water, k) << "\n";
    return 0;
}
