int main() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) cin >> r[i];
    cout << templeBellPower(r) << "\n";
    return 0;
}
