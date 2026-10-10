#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
vector<string> frogsLilyPond(vector<int> pads) {
    int n = pads.size();
    if (n == 1) return {"YES", "0"};

    // Jump Game: can we reach?
    int maxReach = 0;
    for (int i = 0; i < n - 1; i++) {
        if (i > maxReach) return {"NO", "-1"};
        maxReach = max(maxReach, i + pads[i]);
        if (maxReach >= n - 1) break;
    }
    if (maxReach < n - 1) return {"NO", "-1"};

    // Jump Game II: min jumps
    int jumps = 0, curEnd = 0, farthest = 0;
    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + pads[i]);
        if (i == curEnd) {
            jumps++;
            curEnd = farthest;
            if (curEnd >= n - 1) break;
        }
    }
    return {"YES", to_string(jumps)};
}
// --- End candidate function ---

int main() {
    int n;
    cin >> n;
    vector<int> pads(n);
    for (int i = 0; i < n; i++) cin >> pads[i];
    auto res = frogsLilyPond(pads);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
