#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
vector<string> asteroidStation(vector<int> asteroids, long long T) {
    vector<int> stk;
    for (int a : asteroids) {
        bool alive = true;
        while (alive && a < 0 && !stk.empty() && stk.back() > 0) {
            if (stk.back() < -a) stk.pop_back();
            else if (stk.back() == -a) { stk.pop_back(); alive = false; }
            else alive = false;
        }
        if (alive) stk.push_back(a);
    }
    string survivors;
    if (stk.empty()) {
        survivors = "EMPTY";
    } else {
        for (int i = 0; i < (int)stk.size(); i++) {
            if (i) survivors += " ";
            survivors += to_string(stk[i]);
        }
    }
    long long total = 0;
    for (int x : stk) total += abs(x);
    return {survivors, (total > T) ? "YES" : "NO"};
}
// --- End candidate function ---

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
