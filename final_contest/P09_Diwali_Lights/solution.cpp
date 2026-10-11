#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
vector<string> diwaliLights(vector<int> b) {
    int n = b.size();
    long long totalSum = 0;
    for (int x : b) totalSum += x;
    long long leftSum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - b[i];
        if (leftSum == rightSum) { pivot = i; break; }
        leftSum += b[i];
    }
    int lo = 0, hi = n - 1;
    bool palin = true;
    while (lo < hi) {
        if (b[lo] != b[hi]) { palin = false; break; }
        lo++; hi--;
    }
    return {to_string(pivot), palin ? "YES" : "NO"};
}
// --- End candidate function ---

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<string> res = diwaliLights(b);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
