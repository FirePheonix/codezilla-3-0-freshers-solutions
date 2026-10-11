int maxFestivalTasks(long long C, vector<int> starts, vector<int> ends) {
    int n = starts.size();
    // store as {end, start} pairs so sort automatically sorts by end time
    vector<pair<int,int>> tasks(n);
    for (int i = 0; i < n; i++) tasks[i] = {ends[i], starts[i]};
    sort(tasks.begin(), tasks.end());

    int count = 0;
    long long lastEnd = -4000000000LL;
    for (auto& t : tasks) {
        if ((long long)t.second >= lastEnd + C + 1) {
            count++;
            lastEnd = t.first;
        }
    }
    return count;
}
