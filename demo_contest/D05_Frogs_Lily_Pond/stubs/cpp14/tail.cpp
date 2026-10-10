int main() {
    int n;
    cin >> n;
    vector<int> pads(n);
    for (int i = 0; i < n; i++) cin >> pads[i];
    auto res = frogsLilyPond(pads);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
