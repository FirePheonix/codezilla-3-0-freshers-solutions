#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
vector<string> chaiStallCounter(vector<int> arr) {
    int n = arr.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) swap(arr[i], arr[j++]);
    }
    string arranged = "";
    for (int i = 0; i < n; i++) {
        if (i) arranged += " ";
        arranged += to_string(arr[i]);
    }
    unordered_set<int> seen;
    bool dup = false;
    for (int i = 0; i < j; i++) {
        if (seen.count(arr[i])) { dup = true; break; }
        seen.insert(arr[i]);
    }
    return {arranged, dup ? "YES" : "NO"};
}
// --- End candidate function ---

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<string> res = chaiStallCounter(arr);
    for (auto& s : res) cout << s << "\n";
    return 0;
}
