int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<string> res = diwaliLights(b);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
