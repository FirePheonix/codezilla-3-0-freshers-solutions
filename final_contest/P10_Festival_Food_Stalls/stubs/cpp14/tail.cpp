int main() {
    int n;
    long long C;
    cin >> n >> C;
    vector<int> starts(n), ends(n);
    for (int i = 0; i < n; i++) cin >> starts[i] >> ends[i];
    cout << maxFestivalTasks(C, starts, ends) << "\n";
    return 0;
}
