int main() {
    int n;
    long long T;
    cin >> n >> T;
    vector<int> asteroids(n);
    for (int i = 0; i < n; i++) cin >> asteroids[i];
    vector<string> res = asteroidStation(asteroids, T);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
