#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
int longestBalancedStretch(vector<int> arr) {
    unordered_map<long long, int> prefMap;
    prefMap[0] = -1;
    long long prefSum = 0;
    int maxLen = 0;
    for (int i = 0; i < (int)arr.size(); i++) {
        prefSum += arr[i];
        if (prefMap.count(prefSum))
            maxLen = max(maxLen, i - prefMap[prefSum]);
        else
            prefMap[prefSum] = i;
    }
    return maxLen;
}
// --- End candidate function ---

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << longestBalancedStretch(arr) << "\n";
    return 0;
}
