#include <bits/stdc++.h>
using namespace std;

// --- Candidate writes this function ---
int maxFestivalTasks(long long C, vector<int> starts, vector<int> ends) {
    int n = starts.size();
    vector<pair<int,int>> tasks(n);
    for (int i = 0; i < n; i++) tasks[i] = {starts[i], ends[i]};
    sort(tasks.begin(), tasks.end(), [](auto& a, auto& b){ return a.second < b.second; });
    int count = 0;
    long long lastEnd = -2000000000LL;
    for (auto& t : tasks) {
        if ((long long)t.first >= lastEnd + C + 1) {
            count++;
            lastEnd = t.second;
        }
    }
    return count;
}
// --- End candidate function ---

int main() {
    int n;
    long long C;
    cin >> n >> C;
    vector<int> starts(n), ends(n);
    for (int i = 0; i < n; i++) cin >> starts[i] >> ends[i];
    cout << maxFestivalTasks(C, starts, ends) << "\n";
    return 0;
}
