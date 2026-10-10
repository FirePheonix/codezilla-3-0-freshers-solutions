#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
int riceFieldIrrigation(vector<int> water, int k) {
    unordered_map<long long, int> prefCount;
    prefCount[0] = 1;
    long long psum = 0;
    int count = 0;
    for (int x : water) {
        psum += x;
        if (prefCount.count(psum - k))
            count += prefCount[psum - k];
        prefCount[psum]++;
    }
    return count;
}
// --- End candidate function ---

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> water(n);
    for (int i = 0; i < n; i++) cin >> water[i];
    cout << riceFieldIrrigation(water, k) << "\n";
    return 0;
}
