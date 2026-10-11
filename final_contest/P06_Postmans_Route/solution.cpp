#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
string postmanRoute(vector<int> arr) {
    int lo = 0, hi = arr.size() - 1;
    while (lo < hi) {
        if (arr[lo] != arr[hi]) return "NO";
        lo++; hi--;
    }
    return "YES";
}
// --- End candidate function ---

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << postmanRoute(arr) << "\n";
    return 0;
}
