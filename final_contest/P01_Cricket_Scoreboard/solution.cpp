#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
vector<int> cricketScoreboard(vector<string> ops) {
    vector<int> stk;
    int allTimeMax = INT_MIN;
    for (auto& op : ops) {
        if (op == "C") {
            if (!stk.empty()) stk.pop_back();
        } else if (op == "D") {
            int val = stk.back() * 2;
            stk.push_back(val);
            allTimeMax = max(allTimeMax, val);
        } else if (op == "+") {
            int val = stk[stk.size()-1] + stk[stk.size()-2];
            stk.push_back(val);
            allTimeMax = max(allTimeMax, val);
        } else {
            int val = stoi(op);
            stk.push_back(val);
            allTimeMax = max(allTimeMax, val);
        }
    }
    long long total = 0;
    for (int x : stk) total += x;
    return {(int)total, allTimeMax};
}
// --- End candidate function ---

int main() {
    int n;
    cin >> n;
    vector<string> ops(n);
    for (int i = 0; i < n; i++) cin >> ops[i];
    vector<int> res = cricketScoreboard(ops);
    cout << res[0] << "\n" << res[1] << "\n";
    return 0;
}
